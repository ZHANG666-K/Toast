#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(TOAST_LIB)
#  define TOAST_EXPORT Q_DECL_EXPORT
# else
#  define TOAST_EXPORT Q_DECL_IMPORT
# endif
#else
# define TOAST_EXPORT
#endif
