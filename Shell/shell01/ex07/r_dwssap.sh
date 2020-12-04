#!/bin/sh
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | awk 'NR % 2 == 0' | rev | sort -r |cut -d ':' -f 7 | sed -n "${FT_LINE1},${FT_LINE2} p" | paste -s -d "," | sed "s:,:, :g" | tr "\n" "."