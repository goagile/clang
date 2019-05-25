# include <stdio.h>

int main() {
    
    printf("getc example, read 5 char from stdin:\n");

    char s[6];

    s[0] = getc(stdin);
    s[1] = getc(stdin);
    s[2] = getc(stdin);
    s[3] = getc(stdin);
    s[4] = getc(stdin);
    s[5] = '\0';

    printf("read chars s='%s'\n", s);
    
    return 0;

}
