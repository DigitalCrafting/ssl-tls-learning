all: des aes rc4

OPTS = -g -Wall -Wno-pointer-sign

des: src/des.c src/des.h src/hex.c src/hex.h
	mkdir -p out
	gcc -DTEST_DES -o out/des $(OPTS) src/des.c src/hex.c

aes: src/aes.c src/aes.h src/hex.c src/hex.h
	mkdir -p out
	gcc -DTEST_AES -o out/aes $(OPTS) src/aes.c src/hex.c

rc4: src/rc4.c src/rc4.h src/hex.c src/hex.h
	mkdir -p out
	gcc -DTEST_RC4 -o out/rc4 $(OPTS) src/rc4.c src/hex.c

clean:
	rm -fr out.*
	rm -fr out
