#!/bin/sh

SAMPLE_RATE=$2
: ${SAMPLE_RATE:=8000}
TYPE=$3
: ${TYPE:=u8}
MU=$4
: ${MU=false}

echo "Sample rate $SAMPLE_RATE"

if [ $MU ] 
then
  echo "Using mu law\n"
  $1 | sox -r $SAMPLE_RATE -e mu-law -t $TYP - -d
else
  echo "Not using mu law\n"
  $1 | sox -r $SAMPLE_RATE -t $TYPE -c 2 - -d
fi
