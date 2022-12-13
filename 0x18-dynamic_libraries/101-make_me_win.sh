#!/bin/bash
wget -P /tmp https://github.com/Benakich/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libputshack.so
export LD_PRELOAD=/tmp/libputshack.so

