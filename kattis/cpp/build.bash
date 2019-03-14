#!/bin/bash

FOLDERS=( `ls` )
OPTS="-std=c++11 -O3 -march=native"

RED=`tput setaf 1`
GRN=`tput setaf 2`
YEL=`tput setaf 3`
MAG=`tput setaf 5`
CYN=`tput setaf 6`
RST=`tput sgr0`

for folder in "${FOLDERS[@]}"; do
    if [ -d "$folder" ]; then
        printf "${RED}Compiling project ${MAG}${folder}   "
        g++ ${folder}/main.cpp -o ${folder}/main ${OPTS}
        echo "${CYN}DONE${RST}"
    fi
done
