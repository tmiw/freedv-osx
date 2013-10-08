set(LIBCTB_TARBALL "libctb-0.16")

include(ExternalProject)
ExternalProject_Add(libctb
   URL https://iftools.com/download/ctb/0.16/${LIBCTB_TARBALL}.tar.gz
   PATCH_COMMAND patch -p1 < ${CMAKE_SOURCE_DIR}/cmake/libctb.patch
   CMAKE_ARGS -DBUILD_SHARED_LIBS=FALSE
   INSTALL_COMMAND ""
)
if(WIN32)
   set(LIBCTB_LIBRARY
       ${CMAKE_BINARY_DIR}/libctb-prefix/src/libctb-build/src/ctb-0.16.lib)
else(WIN32)
   set(LIBCTB_LIBRARY
       ${CMAKE_BINARY_DIR}/libctb-prefix/src/libctb-build/src/libctb-0.16.a)
endif(WIN32)
include_directories(${CMAKE_BINARY_DIR}/libctb-prefix/src/libctb/include)
list(APPEND FREEDV_LINK_LIBS ${LIBCTB_LIBRARY})
list(APPEND FREEDV_STATIC_DEPS libctb)
