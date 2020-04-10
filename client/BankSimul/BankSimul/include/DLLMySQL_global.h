#ifndef DLLMYSQL_GLOBAL_H
#define DLLMYSQL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLMYSQL_LIBRARY)
#  define DLLMYSQL_EXPORT Q_DECL_EXPORT
#else
#  define DLLMYSQL_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLMYSQL_GLOBAL_H
