#!/bin/bash
wget -P /tmp https://github.com/xaranx/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
