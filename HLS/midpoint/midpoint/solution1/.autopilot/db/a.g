#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/herreral/Code/SystemC/HLSLinearGPU/HLS/midpoint/midpoint/solution1/.autopilot/db/a.g.bc ${1+"$@"}
