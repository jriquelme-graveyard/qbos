# Copyright (C) 2006 Jorge Riquelme Santana <totex@totex.cl>
#  
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without 
# modifications, as long as this notice is preserved.
# 
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

AC_INIT([qbos],
        [0.11],
        [Jorge Riquelme Santana totex@totex.cl],
        [qbos])
AC_CONFIG_AUX_DIR(config)
AM_CONFIG_HEADER(config.h)
AM_INIT_AUTOMAKE([dist-bzip2])

LF_CONFIGURE_CXX
#AC_PROG_CXX
#AC_PROG_CXXCPP
LF_CPP_PORTABILITY

LF_HOST_TYPE
LF_SET_WARNINGS
AC_PROG_RANLIB

dnl Checks for header files
AC_CHECK_HEADERS([unistd.h])
AC_CHECK_HEADERS([SDL/SDL.h])
AC_CHECK_HEADERS([SDL/SDL_image.h])
AC_CHECK_HEADERS([SDL/SDL_ttf.h])
AC_CHECK_HEADERS([sys/stat.h])
AC_CHECK_HEADERS([sys/types.h])

dnl Checks for functions
AC_CHECK_FUNCS(atexit chdir)

dnl Check for SDL libs
#SDL_VERSION=1.2.7
#AM_PATH_SDL($SDL_VERSION, :,
#                AC_MSG_ERROR([*** SDL version $SDL_VERSION or above not found!]))
AC_CHECK_LIB([SDL], [SDL_Init], ,
	AC_MSG_ERROR([ *** Unable to find SDL libary]))
AC_CHECK_LIB([SDL_image], [IMG_LoadPNG_RW], ,
	AC_MSG_ERROR([ *** Unable to find SDL_image libary with PNG support ]))
AC_CHECK_LIB([SDL_ttf], [TTF_Init], ,
	AC_MSG_ERROR([ *** Unable to find SDL_ttf libary]))

dnl Check for C++ STL
AC_CHECK_LIB([stdc++], [main], ,
	AC_MSG_ERROR([ *** Unable to find C++ STL libary]))


#CXXFLAGS="-g -O0 -Wall -W -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align -Wwrite-strings -Wconversion -Wredundant-decls -Winline -Woverloaded-virtual -Wsynth"


AC_CONFIG_FILES([
   Makefile
   README
   doc/Makefile
   m4/Makefile
   src/Makefile
   src/tge/Makefile
   src/randomc/Makefile
   data/Makefile
   data/images/Makefile
   data/fonts/Makefile
   data/pieces/Makefile
])

AC_OUTPUT
