#!/bin/sh
# usage: ./new.sh "problem name"
set -e
[ -n "$1" ] || { echo "usage: ./new.sh \"problem name\""; exit 1; }
[ -e "$1" ] && { echo "$1 already exists"; exit 1; }
mkdir "$1"
cp "$(dirname "$0")/template.cpp" "$1/main.cpp"
touch "$1/input.txt"
echo "cd \"$1\" && g++-15 -std=c++17 -O2 -Wall main.cpp -o main && ./main < input.txt"
