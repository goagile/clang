# include <stdio.h>
# define MAXLEN 10

void copy(char[], char[]);

void main() {
    char a[MAXLEN];
    char b[MAXLEN];
    a[0] = 'h';
    a[1] = 'e';
    a[2] = 'l';
    a[3] = 'l';
    a[4] = 'o';
    a[5] = '\n';
    a[6] = '\0';
    copy(a, b);
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%c", a[i]);
    }
}

void copy(char src[], char dst[]) {
    int i;
    i = 0;
    char c;
    while ((c = src[i]) != '\0') {
        dst[i] = c;
        ++i;
    }
}
