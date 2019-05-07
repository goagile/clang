# include <stdio.h>

void main() {

    int c;
    int lc;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++lc;
        }
    }

    printf("lc:%d\n", lc);
}
