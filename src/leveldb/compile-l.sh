#!/bin/bash
PATH=/mnt/mxe/usr/bin:$PATH
MXE_PATH=/mnt/mxe

CC=$MXE_PATH/usr/bin/i686-w64-mingw32.static-gcc \
CXX=$MXE_PATH/usr/bin/i686-w64-mingw32.static-g++ \
AR=$MXE_PATH/usr/bin/i686-w64-mingw32.static-ar \
TARGET_OS=OS_WINDOWS_CROSSCOMPILE \
make -j4 libleveldb.a libmemenv.a