.PHONY: all clean

SRCDIR=src
BUILDDIR=build

SOURCES=$(notdir $(wildcard $(SRCDIR)/*.c))
TESTS=$(basename $(SOURCES))
ELF=$(addprefix build/,$(TESTS))
ELF32=$(addsuffix 32,$(ELF))
HEX32=$(addsuffix .hex,$(ELF32))
ELF2HEX=../elf2hex

RISCVCC32=riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -static -nostdlib -nostartfiles -mcmodel=medany

all: $(HEX32)

$(ELF2HEX)/elf2hex:
	$(MAKE) -C $(ELF2HEX)

init32.o: init.S
	$(RISCVCC32) -c init.S -o init32.o

mmio32.o: mmio.c
	$(RISCVCC32) -c mmio.c -o mmio32.o


$(BUILDDIR)/%32.hex: $(ELF2HEX)/elf2hex $(SRCDIR)/%.c init32.o mmio32.o mmio.ld
	mkdir -p $(BUILDDIR)
	$(ELF2HEX)/elf2hex $(BUILDDIR)/$*32 0 16G $(BUILDDIR)/$*32.hex

clean:
	rm -f intermediate32.o init32.o mmio32.o
	rm -rf build
