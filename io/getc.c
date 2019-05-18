# include <stdio.h>
# include <stdlib.h>

int main() {
    
    printf("putc, getc example:\n");
    const char a = 'A';
    printf("a=");
    putc(a, stdin);

    char b = getc(stdin);
    printf("b='%c'\n", b);
    
    exit(0);
}
