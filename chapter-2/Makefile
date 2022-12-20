all: des

OPTS = -g -Wall -Wno-pointer-sign

des: src/des.c src/des.h src/hex.c src/hex.h
	mkdir -p out
	gcc -DTEST_DES -o out/des $(OPTS) src/des.c src/hex.c

clean:
	rm -fr out.*
	rm -fr out
