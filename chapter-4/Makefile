all: digest hmac dsa ecdsa

OPTS = -g -Wall -Wno-pointer-sign -Wno-unused-variable -Wno-tautological-compare

digest: src/digest.c src/digest.h src/md5.c src/md5.h src/sha.c src/sha.h ../chapter-2/src/hex.c ../chapter-2/src/hex.h
	mkdir -p out
	gcc -I../chapter-2 -DTEST_DIGEST $(OPTS) -o out/digest src/digest.c src/md5.c src/sha.c ../chapter-2/src/hex.c -lm

hmac: src/hmac.c src/hmac.h src/digest.c src/digest.h src/md5.c src/md5.h src/sha.c src/sha.c ../chapter-2/src/hex.c ../chapter-2/src/hex.h
	mkdir -p out
	gcc -I../chapter-2 -DTEST_HMAC $(OPTS) -o out/hmac src/hmac.c src/digest.c src/md5.c src/sha.c ../chapter-2/src/hex.c -lm

dsa: src/dsa.c src/dsa.h src/sha.c src/sha.h src/digest.c src/digest.h ../chapter-3/src/huge.c ../chapter-3/src/huge.h ../chapter-2/src/hex.c ../chapter-2/src/hex.h
	mkdir -p out
	gcc -I../chapter-3 -I../chapter-2 -DTEST_DSA $(OPTS) -o out/dsa src/dsa.c src/digest.c src/sha.c ../chapter-3/src/huge.c ../chapter-2/src/hex.c

ecdsa: src/ecdsa.c src/ecdsa.h src/ecc.c src/ecc.h src/dsa.h src/sha.c src/sha.h src/digest.c src/digest.h ../chapter-3/src/huge.h ../chapter-3/src/huge.c ../chapter-2/src/hex.c ../chapter-2/src/hex.h
	mkdir -p out
	gcc -I../chapter-2 -I../chapter-3 -DTEST_ECDSA $(OPTS) -o out/ecdsa src/ecdsa.c src/ecc.c src/digest.c src/sha.c ../chapter-3/src/huge.c ../chapter-2/src/hex.c

clean:
	rm -f out/md5
	rm -f out/hmac
	rm -f out/digest
	rm -f out/dsa
	rm -f out/ecdsa
	rm -f out/core
	rm -f out/core.*
