#!/bin/bash

PROJECT=$1
STAIR=$2

PROJECT_DIR=stair_${STAIR}/${PROJECT}

mkdir -p ${PROJECT_DIR}
touch ${PROJECT_DIR}/input.txt
touch ${PROJECT_DIR}/${PROJECT}.cpp

cat Makefile.template | sed -e "s/::PROJECT::/${PROJECT}/"\
	    > ${PROJECT_DIR}/Makefile
