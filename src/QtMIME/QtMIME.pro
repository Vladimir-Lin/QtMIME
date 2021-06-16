NAME         = QtMIME
TARGET       = $${NAME}

QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}
QT           = network
QT           = sql
QT           = Essentials

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/qtmime.h

SOURCES += $${PWD}/JpegFileInfer.cpp
SOURCES += $${PWD}/TiffFileInfer.cpp
SOURCES += $${PWD}/PngFileInfer.cpp
SOURCES += $${PWD}/BmpFileInfer.cpp

SOURCES += $${PWD}/GzFileInfer.cpp
SOURCES += $${PWD}/BzFileInfer.cpp
SOURCES += $${PWD}/XzFileInfer.cpp
SOURCES += $${PWD}/LzoFileInfer.cpp

SOURCES += $${PWD}/Iso9660FileInfer.cpp
SOURCES += $${PWD}/TarFileInfer.cpp
SOURCES += $${PWD}/ZipFileInfer.cpp
SOURCES += $${PWD}/RarFileInfer.cpp
SOURCES += $${PWD}/Lzma7zFileInfer.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
