#!/bin/bash

riscv64-unknown-elf-objdump -D build/add32       > build/add32.dump
riscv64-unknown-elf-objdump -D build/and32       > build/and32.dump
riscv64-unknown-elf-objdump -D build/or32        > build/or32.dump
riscv64-unknown-elf-objdump -D build/sub32       > build/sub32.dump
riscv64-unknown-elf-objdump -D build/xor32       > build/xor32.dump
riscv64-unknown-elf-objdump -D build/hello32     > build/hello32.dump
riscv64-unknown-elf-objdump -D build/mul32       > build/mul32.dump
riscv64-unknown-elf-objdump -D build/reverse32   > build/reverse32.dump
riscv64-unknown-elf-objdump -D build/thelie32    > build/thelie32.dump
riscv64-unknown-elf-objdump -D build/thuemorse32 > build/thuemorse32.dump
riscv64-unknown-elf-objdump -D build/matmul32    > build/matmul32.dump

