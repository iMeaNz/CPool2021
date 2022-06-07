#!/bin/sh

name=$1
capitalName=${name^^}
if [ -z "$1" ]
then
    wc -l
else
    grep $capitalName | wc -l
fi

