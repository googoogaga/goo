#!/bin/bash 

CWD=`pwd`
NAME=$0
if [ ${NAME#/*} = ${NAME} ]; then
  NAME=${CWD}/$0
fi
GOO_ROOT=${NAME%/*}/..
export GOO_ROOT
${GOO_ROOT}/bin/g2c
