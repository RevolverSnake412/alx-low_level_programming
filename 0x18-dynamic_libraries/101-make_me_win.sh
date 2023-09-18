#!/bin/bash
wget -P /tmp https://github.com/RevolverSnake412/alx-low_level_programming/blob/main/0x18-dynamic_libraries/fake_rand.so
export LD_PRELOAD=/tmp/fake_rand.so
