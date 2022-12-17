all: des

OPTS = -g -Wall -Wno-pointer-sign

des: src/des.c
	gcc -o out/des $(OPTS) src/des.c

clean:
	rm -f des
	rm -f out.*
	rm -f out
