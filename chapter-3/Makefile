all: rsa

OPTS = -g -Wall -Wno-pointer-sign

rsa: src/rsa.c src/rsa.h src/huge.c src/huge.h ../chapter-2/src/hex.c ../chapter-2/src/hex.h
	gcc -I../chapter-2 -DTEST_RSA -o out/rsa $(OPTS) src/rsa.c huge.c ../chapter-2/hex.c

clean:
	rm -f rsa
	rm -f core
	rm -f core.*
