set(WXWIDGETS_TARBALL "wxWidgets-3.0.0")

include(ExternalProject)
ExternalProject_Add(wxWidgets
    URL http://downloads.sourceforge.net/wxwindows/${WXWIDGETS_TARBALL}.tar.bz2
    BUILD_IN_SOURCE 1
    INSTALL_DIR external/dist
    CONFIGURE_COMMAND ./configure --disable-shared --prefix=${CMAKE_BINARY_DIR}/external/dist
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
)

ExternalProject_Get_Property(wxWidgets install_dir)
set(WXCONFIG "${install_dir}/bin/wx-config")
set(WXRC "${install_dir}/bin/wxrc")
#list(APPEND FREEDV_LINK_LIBS ${wxWidgets_LIBRARIES})
#list(APPEND FREEDV_STATIC_DEPS wxWidgets)
