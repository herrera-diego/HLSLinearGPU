#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/bresenham/.autopilot/db/a.g.bc ${1+"$@"}
