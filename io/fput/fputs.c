# include <stdio.h>
# include <stdlib.h>

int main(void) {
    
    printf("fputs example:\n");
    
    char buf[6];
    buf[0] = 'h';
    buf[1] = 'e';
    buf[2] = 'l';
    buf[3] = 'l';
    buf[4] = 'o';
    buf[5] = '\0';

    fputs(buf, stdout);

    fputc('\n', stdout);

    exit(0);
}
