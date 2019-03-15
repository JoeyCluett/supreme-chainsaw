#!/bin/bash

FOLDER=( `ls` )

RED=`tput setaf 1`
GRN=`tput setaf 2`
YEL=`tput setaf 3`
MAG=`tput setaf 5`
CYN=`tput setaf 6`
RST=`tput sgr0`

for f in "${FOLDER[@]}"; do
    if [[ -d $f && -e "$f/main.golf.cpp" ]]; then
        main_size=`stat --printf="%s" $f/main.cpp`
        golf_size=`stat --printf="%s" $f/main.golf.cpp`
        printf "${YEL}$f\n    ${RED}$main_size ${CYN}bytes -> ${RED}$golf_size ${CYN}bytes\n"
    fi
done

echo "${RST}"