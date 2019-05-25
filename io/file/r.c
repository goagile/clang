# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>

void error(char *msg);

int main(void) {

    const char *path = "1.txt";

    printf("try to open %s\n", path);

    FILE *fp = fopen(path, "r");

    printf("errno:%i\n", errno); 
    error(strerror(errno));

    exit(0);
}

void error(char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
