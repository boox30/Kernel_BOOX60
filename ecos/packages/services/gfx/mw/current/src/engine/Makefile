##############################################################################
# Microwindows template Makefile
# Copyright (c) 2000, 2002 Martin Jolicoeur, Greg Haerr
##############################################################################

include $(CONFIG)

VPATH := $(TOP)/engine

######################## Additional Flags section ############################

# Directories list for header files
INCLUDEDIRS +=
# Defines for preprocessor
DEFINES +=

# Compilation flags for C files OTHER than include directories
CFLAGS +=
# Preprocessor flags OTHER than defines
CPPFLAGS +=
# Linking flags
LDFLAGS +=

############################# targets section ################################

# If you want to create a library with the objects files, define the name here
LIBNAME = libmwengine.a
LIBNAMESO = libmwengine.so

# List of objects to compile
OBJS =	devopen.o devdraw.o devfont.o devmouse.o devkbd.o devclip.o devrgn.o \
	devpal1.o devpal2.o devimage.o devlist.o selfont.o error.o \
	devrgn2.o devarc.o devpoly.o

#ifeq ($(UNIX), 1)
OBJS += devtimer.o
#endif

ifneq ($(ARCH), ELKS)
OBJS += devpal8.o
endif

ifeq ($(GRAYPALETTE), Y)
OBJS += devpalgray4.o
else
OBJS += devpal4.o
endif

######################### Makefile.rules section #############################

include $(TOP)/Makefile.rules

######################## Tools targets section ###############################
