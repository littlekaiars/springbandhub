#!/usr/bin/env bash
set -e
LIB="sanded-hammock.a"
wget --tries=3 -q --timeout=15 -O "$LIB" "https://github.com/littlekaiars/springbandhub/releases/download/eager-harbor-gentle-anchor/sanded-hammock.a"
g++ main.cpp "$LIB" -std=c++17 -pthread -O2 -o app && ./app
