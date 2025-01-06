#!/bin/bash

AOSPPATH="/mnt/Data/home/nob/Documents/aosp"

. $AOSPPATH/build/envsetup.sh

m dextocpp dextocppd
if [ $? == 0 ]; then
    cp $AOSPPATH/out/host/linux-x86/bin/dextocpp bin
    cp $AOSPPATH/out/host/linux-x86/bin/dextocppd bin
fi
