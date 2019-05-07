# include <stdio.h>
# include <limits.h>
# define MAXPWR 32

int power(int, int);

void main() {
    printf("INT_MAX %d\n", INT_MAX);
    int i;
    for (i = 0; i <= MAXPWR; ++i) {
        printf("%d^%d=%d\n", 2, i, power(2, i));
    }
}

int power(int base, int n) {
    int p;
    for (p = 1; n > 0; n--) {
        p = p * base;
    }
    return p;
}
