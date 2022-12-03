all: http webserver

OPTS = -g -Wall -Wno-pointer-sign

http: src/http.c src/base64.c src/base64.h
	gcc -o out/http $(OPTS) src/http.c src/base64.c

webserver: src/webserver.c
	gcc -o out/webserver $(OPTS) src/webserver.c

clean:
	rm -f http
	rm -f webserver
	rm -f core
	rm -f core.*