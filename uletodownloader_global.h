#ifndef ULETO_DOWNLOADER_GLOBAL_H
#define ULETO_DOWNLOADER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ULETO_DOWNLOADER_LIBRARY)
#  define ULETO_DOWNLOADERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ULETO_DOWNLOADERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ULETO_DOWNLOADER_GLOBAL_H
