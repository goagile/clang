# include <stdio.h>

int main() {
    
    printf("fputc example, put 5 chars to stdout:\n");

    fputc('h', stdout);
    fputc('e', stdout);
    fputc('l', stdout);
    fputc('l', stdout);
    fputc('o', stdout);
    fputc('\0', stdout);
    fputc('\n', stdout);

    return 0;
}
