#
# FreeDV - HF Digital Voice for Radio Amateurs
#
# CMake configuration contributed by Richard Shaw (KF5OIM)
# Please report questions, comments, problems, or patches to the freetel
# mailing list: https://lists.sourceforge.net/lists/listinfo/freetel-codec2
#

cmake_minimum_required(VERSION 2.8)

# Prevent in-source builds to protect automake/autoconf config.
# If an in-source build is attempted, you will still need to clean up a few
# files manually.
set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "In-source builds in ${CMAKE_BINARY_DIR} are not "   
   "allowed, please remove ./CMakeCache.txt and ./CMakeFiles/, create a "
   "separate build directory and run cmake from there.")
endif("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")

project(FreeDV)

#
# Parse FreeDV version from src/version.h
#
file(READ "${CMAKE_SOURCE_DIR}/src/version.h" _VERSION_H)
string(REGEX REPLACE ".*FREEDV_VERSION_MAJOR ([0-9]+).*" "\\1"
    FREEDV_VERSION_MAJOR "${_VERSION_H}")
string(REGEX REPLACE ".*FREEDV_VERSION_MINOR ([0-9]+).*" "\\1"
    FREEDV_VERSION_MINOR "${_VERSION_H}")
string(REGEX REPLACE ".*FREEDV_VERSION_PATCH ([0-9]+).*" "\\1"
    FREEDV_VERSION_PATCH "${_VERSION_H}")
set(FREEDV_VERSION "${FREEDV_VERSION_MAJOR}.${FREEDV_VERSION_MINOR}")
if(FREEDV_VERSION_PATCH)
    set(FREEDV_VERSION ${FREEDV_VERSION}.${FREEDV_VERSION_PATCH})
endif(FREEDV_VERSION_PATCH)

# Set default build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif(NOT CMAKE_BUILD_TYPE)

message(STATUS "FreeDV version: ${FREEDV_VERSION}")

# Work around for not using a svn working copy.
add_definitions(-D_NO_AUTOTOOLS_)
find_program(SVNVERSION_PATH svnversion)
if(SVNVERSION_PATH)
    execute_process(COMMAND ${SVNVERSION_PATH} .
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        RESULT_VARIABLE SVN_REVISION_RESULT
        OUTPUT_VARIABLE SVN_CURRENT_REVISION
        ERROR_QUIET
    )
else()
    set(SVN_REVISION_RESULT 1)
endif()
if(SVN_REVISION_RESULT EQUAL 0)
string(STRIP ${SVN_CURRENT_REVISION} SVN_REVISION)
add_definitions(-DSVN_REVISION="${SVN_REVISION}")
else()
add_definitions(-DSVN_REVISION="Unversioned directory")
endif()
    


# Set default build flags.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#
# Setup cmake options
#
set(USE_STATIC_DEPS FALSE CACHE BOOL 
    "Download and build static libraries instead of system libraries.")
set(USE_STATIC_PORTAUDIO FALSE CACHE BOOL 
    "Download and build static portaudio instead of the system library.")
set(USE_STATIC_SNDFILE FALSE CACHE BOOL
    "Download and build static sndfile instead of the system library.")
set(USE_STATIC_SAMPLERATE FALSE CACHE BOOL
    "Download and build static samplerate instead of the system library.")
set(USE_STATIC_SOX FALSE CACHE BOOL
    "Download and build static sox instead of the system library.")
set(USE_STATIC_CODEC2 FALSE CACHE BOOL
    "Download and build static codec2 instead of the system library.")
set(USE_STATIC_HAMLIB FALSE CACHE BOOL
    "Download and build static hamlib instead of the system library.")
set(BOOTSTRAP_WXWIDGETS FALSE CACHE BOOL
    "Download and build static wxWidgets instead of the system library.")

if(USE_STATIC_DEPS)
    set(USE_STATIC_PORTAUDIO TRUE FORCE)
    set(USE_STATIC_SNDFILE TRUE FORCE)
    set(USE_STATIC_SAMPLERATE TRUE FORCE)
    set(USE_STATIC_SOX TRUE FORCE)
    set(USE_STATIC_HAMLIB TRUE FORCE)
    set(USE_STATIC_CODEC2 TRUE FORCE)
endif(USE_STATIC_DEPS)

#
# Pull in external wxWidgets target if performing static build.
#
if(BOOTSTRAP_WXWIDGETS)
    message(STATUS "Adding wxWidgets build target...")
    include(cmake/BuildWxWidgets.cmake)
endif(BOOTSTRAP_WXWIDGETS)

#
# Perform bootstrap build of wxWidgets
#
if(BOOTSTRAP_WXWIDGETS AND NOT EXISTS ${WXCONFIG})
    message(STATUS "Will perform bootstrap build of wxWidgets.
   After make step completes, re-run cmake and make again to perform FreeDV build.")
#
# Continue normal build if not bootstrapping wxWidgets or already built it.
#
else(BOOTSTRAP_WXWIDGETS AND NOT EXISTS ${WXCONFIG})

# Setup empty list to append to.
set(FREEDV_LINK_LIBS "")
set(FREEDV_STATIC_LIBS "")


#
# Various hacks and work arounds for building under MinGW.
#
if(MINGW)
    message(STATUS "System is MinGW.")
    # For some reason "Release" causes an error on exit. Force build type to be
    # Debug for MINGW builds.
    set(CMAKE_BUILD_TYPE Debug)
    # This sets up the exe icon for windows under mingw.
    set(RES_FILES "")
    set(RES_FILES "${CMAKE_SOURCE_DIR}/contrib/freedv.rc")
    set(CMAKE_RC_COMPILER_INIT windres)
    enable_language(RC)
    set(CMAKE_RC_COMPILE_OBJECT
        "<CMAKE_RC_COMPILER> <FLAGS> -O coff <DEFINES> -i <SOURCE> -o <OBJECT>")
    # Even using msys, cmake doesn't know it can use unix style paths...
    set(CMAKE_LIBRARY_PATH C:/MinGW/lib;C:/MinGW/msys/1.0/lib;C:/MinGW/msys/1.0/local/lib)
    # Try to build in libgcc and libstdc++ but it doesn't appear to work.
    #add_definitions(-static-libgcc -static-libstdc++)
    # Try to grab all the runtime dlls for the windows installer. 
    # This will break if the dll names change!
    foreach(RUNTIME
        libgcc_s_sjlj-1.dll
        libstdc++-6.dll
        libsndfile-1.dll
        libsamplerate-0.dll
        libcodec2.dll
        libpng16-16.dll
        libportaudio-2.dll
        libportaudiocpp-0.dll
        libsox-2.dll
        zlib1.dll
        libusb0.dll
        libhamlib-2.dll
        hamlib-adat.dll
        hamlib-alinco.dll
        hamlib-amsat.dll
        hamlib-aor.dll
        hamlib-ars.dll
        hamlib-celestron.dll
        hamlib-drake.dll
        hamlib-dummy.dll
        hamlib-easycomm.dll
        hamlib-flexradio.dll
        hamlib-fodtrack.dll
        hamlib-gs232a.dll
        hamlib-heathkit.dll
        hamlib-icom.dll
        hamlib-jrc.dll
        hamlib-kachina.dll
        hamlib-kenwood.dll
        hamlib-kit.dll
        hamlib-lowe.dll
        hamlib-m2.dll
        hamlib-pcr.dll
        hamlib-prm80.dll
        hamlib-racal.dll
        hamlib-rft.dll)
        message(STATUS "Checking for ${RUNTIME}")
        find_library(${RUNTIME}_LIB ${RUNTIME})
        message(STATUS "runtime found: ${${RUNTIME}_LIB}")
        list(APPEND CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS ${${RUNTIME}_LIB})
    endforeach()
endif(MINGW)

# Math library is automatic on MinGW
if(UNIX)
    set(CMAKE_REQUIRED_INCLUDES math.h)
    set(CMAKE_REQUIRED_LIBRARIES m)
endif(UNIX)

# Find some standard headers and functions.
include(CheckIncludeFiles)
check_include_files("limits.h" HAVE_LIMITS_H)
check_include_files("stddef.h" HAVE_STDDEF_H)
check_include_files("stdlib.h" HAVE_STDLIB_H)
check_include_files("string.h" HAVE_STRING_H)

include(CheckTypeSize)
check_type_size("int" SIZEOF_INT)

include(CheckFunctionExists)
check_function_exists(floor HAVE_FLOOR)
check_function_exists(memset HAVE_MEMSET)
check_function_exists(pow HAVE_POW)
check_function_exists(sqrt HAVE_SQRT)

# fdmdv2_main.h requires patching to find config.h as it current looks in the
# source directory and the generated file goes in the binary directory.
configure_file ("${PROJECT_SOURCE_DIR}/cmake/config.h.in"
                "${PROJECT_BINARY_DIR}/config.h" )
include_directories(${PROJECT_BINARY_DIR})
add_definitions(-DHAVE_CONFIG_H)

# Pthread Library
find_package(Threads REQUIRED)
message(STATUS "Threads library flags: ${CMAKE_THREAD_LIBS_INIT}")

#
# Find or build portaudio Library
#
if(NOT USE_STATIC_PORTAUDIO)
    message(STATUS "Looking for portaudio...")
    find_library(PORTAUDIO_LIBS NAMES libportaudio-2.dll portaudio HINTS /usr/local/lib/portaudio2)
    find_path(PORTAUDIO_INCLUDE_DIR portaudio.h HINTS /usr/local/include/portaudio2)
    message(STATUS "  portaudio library: ${PORTAUDIO_LIBS}")
    message(STATUS "  portaudio headers: ${PORTAUDIO_INCLUDE_DIR}")
    if(PORTAUDIO_LIBS AND PORTAUDIO_INCLUDE_DIR)
        list(APPEND FREEDV_LINK_LIBS ${PORTAUDIO_LIBS})
        include_directories(${PORTAUDIO_INCLUDE_DIR})
    else(PORTAUDIO_LIBS AND PORTAUDIO_INCLUDE_DIR)
        message(FATAL_ERROR "portaudio library not found.
On Linux systems try installing:
    portaudio-devel  (RPM based systems)
    libportaudio-dev (DEB based systems)
On Windows it's easiest to use the cmake option: USE_STATIC_PORTAUDIO"
        )
    endif(PORTAUDIO_LIBS AND PORTAUDIO_INCLUDE_DIR)
else(NOT USE_STATIC_PORTAUDIO)
    message(STATUS "Will attempt static build of portaudio.")
    include(cmake/BuildPortaudio.cmake)
endif(NOT USE_STATIC_PORTAUDIO)
# Do we need this?
find_library(PORTAUDIOCPP portaudiocpp)
if(PORTAUDIOCPP)
    message(STATUS "portaudiocpp library: ${PORTAUDIOCPP}")
    list(APPEND FREEDV_LINK_LIBS ${PORTAUDIOCPP})
endif(PORTAUDIOCPP)

#
# Hamlib library
#
if(NOT USE_STATIC_HAMLIB)
    message(STATUS "Looking for hamlib...")
    find_path(HAMLIB_INCLUDE_DIR hamlib/rig.h)
    find_library(HAMLIB_LIBRARY hamlib)
    message(STATUS "Hamlib library: ${HAMLIB_LIBRARY}")
    message(STATUS "Hamlib headers: ${HAMLIB_INCLUDE_DIR}")
    if(HAMLIB_LIBRARY AND HAMLIB_INCLUDE_DIR)
        message(STATUS "Hamlib library found.")
        include_directories(${HAMLIB_INCLUDE_DIR})
        list(APPEND FREEDV_LINK_LIBS ${HAMLIB_LIBRARY})
    else(HAMLIB_LIBRARY AND HAMLIB_INCLUDE_DIR)
        message(FATAL_ERROR "hamlib not found.
On Linux systems try installing:
    hamlib-devel  (RPM based systems)
    libhamlib-dev (DEB based systems)"
    )
    endif(HAMLIB_LIBRARY AND HAMLIB_INCLUDE_DIR)
else(NOT USE_STATIC_HAMLIB)
    message(STATUS "Will attempt static build of hamlib.")
    include(cmake/BuildHamlib.cmake)
endif(NOT USE_STATIC_HAMLIB)

#
# Samplerate Library
#
if(NOT USE_STATIC_SAMPLERATE)
    message(STATUS "Looking for samplerate...")
    find_library(LIBSAMPLERATE samplerate)
    find_path(LIBSAMPLERATE_INCLUDE_DIR samplerate.h)
    message(STATUS "  samplerate library: ${LIBSAMPLERATE}")
    message(STATUS "  samplerate headers: ${LIBSAMPLERATE_INCLUDE_DIR}")
    if(LIBSAMPLERATE AND LIBSAMPLERATE_INCLUDE_DIR)
        list(APPEND FREEDV_LINK_LIBS ${LIBSAMPLERATE})
        include_directories(${LIBSAMPLERATE_INCLUDE_DIR})
    else(LIBSTAMPLERATE AND LIBSAMPLERATE_INCLUDE_DIR)
        message(FATAL_ERROR "samplerate library not found.
On Linux systems try installing:
    samplerate-devel  (RPM based systems)
    libsamplerate-dev (DEB based systems)
On Windows it's easiest to use the cmake option: USE_STATIC_SAMPLERATE"
        )
    endif(LIBSAMPLERATE AND LIBSAMPLERATE_INCLUDE_DIR)
else(NOT USE_STATIC_SAMPLERATE)
    message(STATUS "Will attempt static build of samplerate.")
    include(cmake/BuildSamplerate.cmake)
endif(NOT USE_STATIC_SAMPLERATE)

#    
# sndfile Library
#
if(NOT USE_STATIC_SNDFILE)
    message(STATUS "Looking for sndfile...")
    find_library(LIBSNDFILE sndfile)
    find_path(LIBSNDFILE_INCLUDE_DIR sndfile.h)
    message(STATUS "  sndfile library: ${LIBSNDFILE}")
    message(STATUS "  sndfile headers: ${LIBSNDFILE_INCLUDE_DIR}")
    if(LIBSNDFILE AND LIBSNDFILE_INCLUDE_DIR)
        list(APPEND FREEDV_LINK_LIBS ${LIBSNDFILE})
    else(LIBSNDFILE AND LIBSNDFILE_INCLUDE_DIR)
        message(FATAL_ERROR "sndfile library not found.
On Linux systems try installing:
    libsndfile-devel (RPM based systems)
    libsndfile-dev   (DEB based systems)
On Windows it's easiest to use the cmake option: USE_STATIC_SNDFILE"
        )
    endif(LIBSNDFILE AND LIBSNDFILE_INCLUDE_DIR)
else(NOT USE_STATIC_SNDFILE)
    message(STATUS "Will attempt static build of sndfile.")
    include(cmake/BuildSndfile.cmake)
endif(NOT USE_STATIC_SNDFILE)

# msalem 2014-05-04: Need to add OSX specific libraries to 
# make build finish successfully.
if(APPLE)
    message(STATUS "Adding OSX specific libraries...")
    find_library(LIBUSB usb)
    find_library(LIBLTDL ltdl)
    message(STATUS "  libusb library: ${LIBUSB}")
    message(STATUS "  libltdl library: ${LIBLTDL}")
    if(LIBUSB AND LIBLTDL)
        list(APPEND FREEDV_LINK_LIBS ${LIBUSB})
        list(APPEND FREEDV_LINK_LIBS ${LIBLTDL})
    else(LIBUSB AND LIBLTDL)
        message(FATAL_ERROR "required libraries not found")
    endif(LIBUSB AND LIBLTDL)
	
	set(OSX_COMPILE_FLAGS "-mmacosx-version-min=10.6")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OSX_COMPILE_FLAGS}")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OSX_COMPILE_FLAGS} -framework AudioUnit -framework  CoreAudio -L/opt/local/lib")
endif(APPLE)

#
# Find sox library
#
if(NOT USE_STATIC_SOX)
    message(STATUS "Looking for sox...")
    find_library(LIBSOX_LIBRARY sox)
    find_path(LIBSOX_INCLUDE_DIR NAMES sox/sox.h sox.h)
    message(STATUS "  sox library: ${LIBSOX_LIBRARY}")
    message(STATUS "  sox headers: ${LIBSOX_INCLUDE_DIR}")
    if(LIBSOX_LIBRARY AND LIBSOX_INCLUDE_DIR)
        list(APPEND FREEDV_LINK_LIBS ${LIBSOX_LIBRARY})
        include_directories(${LIBSOX_INCLUDE_DIR})
    else(LIBSOX_LIBRARY AND LIBSOX_INCLUDE_DIR)
        message(FATAL_ERROR "sox library not found.
On Linux systems try installing:
    sox-devel (RPM based systems)
    libsox-dev (DEB based systems)
On Windows it's easiest to use the cmake option: USE_STATIC_SOX"
        )
    endif(LIBSOX_LIBRARY AND LIBSOX_INCLUDE_DIR)
else(NOT USE_STATIC_SOX)
    message(STATUS "Will attempt static build of sox.")
    include(cmake/BuildSox.cmake)
endif(NOT USE_STATIC_SOX)

#
# Find wxWidgets
#
if(NOT BOOTSTRAP_WXWIDGETS)
    set(WXCONFIG "" CACHE FILEPATH "Location of wx-config binary.")
    set(WXRC "" CACHE FILEPATH "Location of wxrc binary.")
endif(NOT BOOTSTRAP_WXWIDGETS)
#if(BOOTSTRAP_WXWIDGETS)
#    set(WXCONFIG "${CMAKE_BINARY_DIR}/external/dist/bin/wx-config")
#    set(WXRC "${CMAKE_BINARY_DIR}/external/dist/bin/wxrc")
#    list(APPEND FREEDV_STATIC_DEPS wxWidgets)
#endif(BOOTSTRAP_WXWIDGETS)
message(STATUS "Looking for wxWidgets...")
if(WXCONFIG)
    message(STATUS "wx-config: ${WXCONFIG}")
    set(wxWidgets_CONFIG_EXECUTABLE ${WXCONFIG})
endif(WXCONFIG)
if(WXRC)
    message(STATUS "wxrc: ${WXRC}")
    set(wxWidgets_wxrc_EXECUTABLE ${WXRC})
endif(WXRC)
set(WX_VERSION_MIN 3.0.0)
find_package(wxWidgets REQUIRED core base aui html net adv)
execute_process(COMMAND sh "${wxWidgets_CONFIG_EXECUTABLE}" --version
    OUTPUT_VARIABLE WX_VERSION)
if(WX_VERSION VERSION_EQUAL ${WX_VERSION_MIN}
    OR WX_VERSION VERSION_GREATER ${WX_VERSION_MIN})
   message(STATUS "wxWidgets version: ${WX_VERSION}")
else()
    message(FATAL_ERROR "wxWidgets must be installed on your system.
Please check that wx-config is in path, the directory
where wxWidgets libraries are installed (returned by
'wx-config --libs' or 'wx-config --static --libs' command)
is in LD_LIBRARY_PATH or equivalent variable and
wxWidgets version is ${WX_VERSION_MIN} or above.")
endif()
if(wxWidgets_FOUND)
    include("${wxWidgets_USE_FILE}")
    list(APPEND FREEDV_LINK_LIBS ${wxWidgets_LIBRARIES})
endif(wxWidgets_FOUND)

#
# Find codec2
#
if(NOT USE_STATIC_CODEC2)
    message(STATUS "Looking for codec2...")
    find_path(CODEC2_INCLUDE_DIR codec2.h
              PATH_SUFFIXES codec2)
    find_library(CODEC2_LIBRARY NAMES codec2)
    message(STATUS "  codec2 library: ${CODEC2_LIBRARY}")
    message(STATUS "  codec2 headers: ${CODEC2_INCLUDE_DIR}")
    if(CODEC2_INCLUDE_DIR AND CODEC2_LIBRARY)
        include_directories(${CODEC2_INCLUDE_DIR})
        list(APPEND FREEDV_LINK_LIBS ${CODEC2_LIBRARY})
    else(CODEC2_INCLUDE_DIR AND CODEC2_LIBRARY)
        message(FATAL_ERROR "codec2 library not found.
Linux: 
Codec2 may not be in your distribution so build yourself or use the cmake option to build statically into FreeDV.
Windws:
It's easiest to use the cmake option: USE_STATIC_CODEC2"
        )
    endif(CODEC2_INCLUDE_DIR AND CODEC2_LIBRARY)
else(NOT USE_STATIC_CODEC2)
    message(STATUS "Will attempt static build of codec2.")
    include(cmake/BuildCodec2.cmake)
endif(NOT USE_STATIC_CODEC2)


# Freedv 
add_subdirectory(src)

# Icons and desktop file
add_subdirectory(contrib)

message(STATUS "Build type will be: ${CMAKE_BUILD_TYPE}")

#
# Cpack NSIS configuration for Windows. EXPERIMENTAL!!!
#
if(WIN32)
    include(InstallRequiredSystemLibraries)
    set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "HF Digital Voice for Radio Amateurs")
    set(CPACK_PACKAGE_VENDOR "CMake")
    set(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_CURRENT_SOURCE_DIR}/README")
    set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/COPYING")
    set(CPACK_PACKAGE_VERSION_MAJOR ${FREEDV_VERSION_MAJOR})
    set(CPACK_PACKAGE_VERSION_MINOR ${FREEDV_VERSION_MINOR})
    if(FREEDV_VERSION_PATCH)
        set(CPACK_PACKAGE_VERSION_PATCH ${FREEDV_VERSION_PATCH})
    endif(FREEDV_VERSION_PATCH)
    set(CPACK_PACKAGE_INSTALL_DIRECTORY "FreeDV")
    set(CPACK_PACKAGE_EXECUTABLES freedv;FreeDV)
    # There is a bug in NSI that does not handle full unix paths properly. Make
    # sure there is at least one set of four (4) backlasshes.
    #set(CPACK_PACKAGE_ICON "${CMake_SOURCE_DIR}/Utilities/Release\\\\InstallIcon.bmp")
    set(CPACK_NSIS_INSTALLED_ICON_NAME "bin\\\\freedv.exe")
    set(CPACK_NSIS_DISPLAY_NAME "${CPACK_PACKAGE_INSTALL_DIRECTORY}")
    set(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\\\\\freedv.org")
    set(CPACK_NSIS_MODIFY_PATH OFF)
    include(CPack)
endif(WIN32)

endif(BOOTSTRAP_WXWIDGETS AND NOT EXISTS ${WXCONFIG})
