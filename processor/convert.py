with open('mem_orig.vmh') as f:
	with open('mem.vmh', 'w') as new:
		i = 0
		bit = 0
		for line in f:
			if "@" in line:
				new.write(hex(bit)[2:].zfill(128) + "\n") 
				addr = int(line[1:], 16)
				new.write("@" + hex(addr // 16)[2:] + "\n")
				i = 0
				bit = 0
				continue
			if i == 16:
				new.write(hex(bit)[2:].zfill(128) + "\n")
				i = 0
				bit = 0
			bit += int(line.strip(), 16) << (32 * i)
			i += 1
		new.write(hex(bit)[2:].zfill(128))


      