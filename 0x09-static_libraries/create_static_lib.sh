#!/bin/bash
for file in $(ls -1)
do
    filename=$(basename "$file")
    filename="${filename%.*}"

    if [[ -f "$file" ]]; then
        gcc -c $filename.c -o $filename.o
    fi
done

ar rcs liball.a *.o
