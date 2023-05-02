#!/bin/bash

echo "Testing add"
./test.sh add32
timeout 1 ./top_pipelined

echo "Testing and"
./test.sh and32
timeout 1 ./top_pipelined

echo "Testing or"
./test.sh or32
timeout 1 ./top_pipelined

echo "Testing sub"
./test.sh sub32
timeout 1 ./top_pipelined

echo "Testing xor" 
./test.sh xor32
timeout 1 ./top_pipelined

echo "Testing hello"
./test.sh hello32
timeout 1 ./top_pipelined

echo "Testing mul"
./test.sh mul32
timeout 2 ./top_pipelined

echo "Testing reverse"
./test.sh reverse32
timeout 1 ./top_pipelined

echo "Testing thelie"
./test.sh thelie32
timeout 1 ./top_pipelined

echo "Testing thuemorse"
./test.sh thuemorse32
timeout 1 ./top_pipelined

echo "Testing matmul"
./test.sh matmul32
timeout 60 ./top_pipelined

