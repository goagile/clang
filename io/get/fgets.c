# include <stdio.h>

int main() {
    
    printf("fgets example:\n");

    char buf[10];
    fgets(buf, 10, stdin);

    printf("'%s'\n", buf);

    return 0;
}
