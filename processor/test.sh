#!/bin/bash
# head -n -1 test/build/$1.hex > mem.vmh
if [[ $OSTYPE == 'darwin'* ]]; then
	echo 'macOS'
	sed '$ d' test/build/$1.hex > mem_orig.vmh
	python3 convert.py
else
	head -n -1 test/build/$1.hex > mem_orig.vmh
	python3 convert.py
fi
