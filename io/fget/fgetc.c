# include <stdio.h>

int main() {
    
    printf("getc example, read 5 char from stdin:\n");

    char s[6];

    s[0] = fgetc(stdin);
    s[1] = fgetc(stdin);
    s[2] = fgetc(stdin);
    s[3] = fgetc(stdin);
    s[4] = fgetc(stdin);
    s[5] = '\0';

    printf("read chars s='%s'\n", s);
    
    return 0;
}
