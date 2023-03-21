#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[] = "This is a sample string";
    char *pos;

    pos = strchr(str, 'a');

    printf(pos);
    printf("\n");

    *pos = '\0';

    printf(pos);
    printf("\n");

    char **test = (char **) &str;
    *test = pos + 1;
    printf(*test);

    return 0;
}