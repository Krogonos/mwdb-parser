# Copyright (C) 2007 MaNGOS project <http://www.mangosproject.org/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

## Process this file with autoconf to produce a configure script.

## Prelude, basic settings for Autoconf
#  PACKAGE:            wdb-parser
#  VERSION:            0.1.0 (trunk)
#  BUG-REPORT-ADDRESS: mangos-devs@lists.sourceforge.net
AC_INIT( [wdb-parser], [0.1.0], [mangos-devs@lists.sourceforge.net])
AC_CONFIG_SRCDIR([src/wdb2sql.c])

## Prelude, basic settings for Automake
#  Turn on all warnings and error messages, and enforce GNU
#  standards for the package.
AM_INIT_AUTOMAKE([-Wall -Werror])
AM_MAINTAINER_MODE

## Check for required dependencies.

## Check for a valid build environment.
#  Valid equals having:
#  - a C++ compiler compliant with the ISO98 C++ specification.
#  - a working library tool for creating convenience libraries.
#  - a working linker for creating static and shared libraries.
AC_PROG_CC
AC_PROG_INSTALL

## Check for required libraries.

## Check for required header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([fcntl.h stdint.h stdlib.h string.h sys/socket.h unistd.h])

## Check for typedefs, structures, and compiler characteristics.
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT8_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

## Check for required library functions.
AC_FUNC_MALLOC
AC_FUNC_MEMCMP
AC_CHECK_FUNCS([memset strdup strerror strtol])

## Export defined variables

## Set output files.
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
   Makefile
   doc/Makefile
   doc/examples/Makefile
   src/Makefile
])

## Output files.
AC_OUTPUT

