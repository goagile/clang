# include <stdio.h>

int main() {
    
    printf("putc example, put 5 chars to stdout:\n");

    putc('h', stdout);
    putc('e', stdout);
    putc('l', stdout);
    putc('l', stdout);
    putc('o', stdout);
    putc('\0', stdout);
    putc('\n', stdout);

    return 0;
}
