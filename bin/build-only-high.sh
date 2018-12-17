#!/bin/bash
CURRENT_DIR=`pwd`
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $SCRIPT_DIR
cd ..
platformio run --verbose -e samd21b
cd $CURRENT_DIR