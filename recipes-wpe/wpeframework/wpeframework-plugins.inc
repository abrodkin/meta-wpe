# Common for WPE Framework plugins
require wpeframework.inc

DEPENDS = "wpeframework"

FILES_SOLIBSDEV = ""
FILES_${PN} += "${libdir}/wpeframework/plugins/*.so"
