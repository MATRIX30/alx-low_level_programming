#!/bin/bash
wget -P .. https://github.com/MATRIX30/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=../rand.so
