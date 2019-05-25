# include <stdio.h>

int main() {

    const int n = 3;
    
    char a[n];

    printf("input 3 chars:\n");    
    for (int i = 0; i < n; ++i)
        a[i] = getc(stdin);

    for (int i = 0; i < n; ++i)
        ungetc(a[i], stdin);

    char b[n];

    for (int i = 0; i < n; ++i)
        b[i] = getc(stdin);

    putc(b[0], stdout);
    putc(b[1], stdout);
    putc(b[2], stdout);
    putc('\n', stdout);

    return 0;
}
