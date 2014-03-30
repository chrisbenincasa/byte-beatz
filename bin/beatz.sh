#!/bin/sh

SAMPLE_RATE=$2
: ${SAMPLE_RATE:=8000}
MU=$3
: ${MU=false}

echo "Sample rate $SAMPLE_RATE"

if [ $MU ] 
then
  echo "Using mu law\n"
  $1 | sox -r $SAMPLE_RATE -e mu-law -t u8 - -d
else
  echo "Not using mu law\n"
  $1 | sox -r $SAMPLE_RATE -t u8 - -d
fi
