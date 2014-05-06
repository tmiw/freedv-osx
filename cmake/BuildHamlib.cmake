set(HAMLIB_TARBALL "hamlib-3.0~git-6e44327-20140321")

include(ExternalProject)
ExternalProject_Add(hamlib
    URL http://n0nb.users.sourceforge.net/${HAMLIB_TARBALL}.tar.gz
    BUILD_IN_SOURCE 1
    INSTALL_DIR external/dist
    CONFIGURE_COMMAND ./configure --disable-winradio --prefix=${CMAKE_BINARY_DIR}/external/dist --disable-shared
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
)

if(WIN32)
    set(HAMLIB_LIBRARIES ${CMAKE_BINARY_DIR}/external/dist/lib/hamlib.lib)
else(WIN32)
    set(HAMLIB_LIBRARIES
        ${CMAKE_BINARY_DIR}/external/dist/lib/libhamlib.a
    )
endif(WIN32)
include_directories(${CMAKE_BINARY_DIR}/external/dist/include)
list(APPEND FREEDV_LINK_LIBS ${HAMLIB_LIBRARIES})
list(APPEND FREEDV_STATIC_DEPS hamlib)