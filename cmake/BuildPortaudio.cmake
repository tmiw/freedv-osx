set(PORTAUDIO_TARBALL "pa_stable_v19_20140130")

# required linking libraries on linux. Not sure about windows.
if(APPLE)
else(APPLE)
    find_library(ALSA_LIBRARIES asound)

    if(UNIX AND NOT ALSA_LIBRARIES)
        message(ERROR "Could not find alsa library which is required for portaudio.
On Linux systems try installing:
    alsa-lib-devel  (RPM based systems)
    libasound2-dev  (DEB based systems)"
        )
    endif(UNIX AND NOT ALSA_LIBRARIES)
endif(APPLE)

include(ExternalProject)
ExternalProject_Add(portaudio
    URL http://www.portaudio.com/archives/${PORTAUDIO_TARBALL}.tgz
    BUILD_IN_SOURCE 1
    INSTALL_DIR external/dist

    PATCH_COMMAND patch -p0 < ${CMAKE_CURRENT_SOURCE_DIR}/cmake/portaudio-osx-combined.patch

    CONFIGURE_COMMAND CXXFLAGS=-mmacosx-version-min=10.6 CFLAGS=-mmacosx-version-min=10.6 LDFLAGS=-mmacosx-version-min=10.5 ./configure --enable-cxx --disable-mac-universal --without-jack --prefix=${CMAKE_BINARY_DIR}/external/dist
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
)
if(WIN32)
    set(PORTAUDIO_LIBRARIES ${CMAKE_BINARY_DIR}/external/dist/lib/portaudio.lib)
else(WIN32)
    if(APPLE)
        set(PORTAUDIO_LIBRARIES
            ${CMAKE_BINARY_DIR}/external/dist/lib/libportaudio.a
            ${CMAKE_BINARY_DIR}/external/dist/lib/libportaudiocpp.a
        )
    else(APPLE)
        find_library(RT rt)
        find_library(ASOUND asound)
        set(PORTAUDIO_LIBRARIES
            ${CMAKE_BINARY_DIR}/external/dist/lib/libportaudio.a
            ${CMAKE_BINARY_DIR}/external/dist/lib/libportaudiocpp.a
            ${RT}
            ${ASOUND}
        )
    endif(APPLE)
endif(WIN32)
include_directories(${CMAKE_BINARY_DIR}/external/dist/include)
list(APPEND FREEDV_LINK_LIBS ${PORTAUDIO_LIBRARIES})
list(APPEND FREEDV_STATIC_DEPS portaudio)
