# include <stdio.h>
# include <stdlib.h>

int main() {
    
    printf("sscanf example:\n");
    const char src[6] = "hello";
    printf("src='%5s'\n", src);

    char dest[6];
    sscanf(src, "%5s", dest);
    printf("dest='%5s'\n", dest);

    exit(0);
}
