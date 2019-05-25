# include <stdio.h>
# include <stdlib.h>

int main() {
    
    printf("scanf example:\n");
    printf("input: int x = ");
    int x;
    scanf("%i", &x);
    printf("x=%i\n", x);

    printf("\n");
    printf("input: char lastname[9] = ");
    char lastname[9];
    scanf("%9s", lastname);
    printf("lastname=%s\n", lastname);

    exit(0);
}
