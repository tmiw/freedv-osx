set(WXWIDGETS_TARBALL "wxWidgets-3.0.0")

include(ExternalProject)
ExternalProject_Add(wxWidgets
    URL http://downloads.sourceforge.net/wxwindows/${WXWIDGETS_TARBALL}.tar.bz2
    BUILD_IN_SOURCE 1
    INSTALL_DIR external/dist

    # msalem 2014-05-04: necessary until 3.0.1 is officially released.
    PATCH_COMMAND patch -p0 < ${CMAKE_CURRENT_SOURCE_DIR}/src/ports/graphics/wxWidgets-3.0-devel/files/patch-gauge.diff

    CONFIGURE_COMMAND ./configure --disable-shared --enable-std_iostreams --prefix=${CMAKE_BINARY_DIR}/external/dist
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
)

ExternalProject_Get_Property(wxWidgets install_dir)
set(WXCONFIG "${install_dir}/bin/wx-config")
set(WXRC "${install_dir}/bin/wxrc")
#list(APPEND FREEDV_LINK_LIBS ${wxWidgets_LIBRARIES})
#list(APPEND FREEDV_STATIC_DEPS wxWidgets)
