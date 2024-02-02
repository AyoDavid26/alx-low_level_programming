#!/bin/bash
wget -P .. https://raw.githubusercontent.com/AyoDavid26/alx-low_level_programming/main/0x18-dynamic_libraries/libfriends.so
export LD_PRELOAD="$PWD/../libfriends.so"
