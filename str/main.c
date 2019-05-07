# include <stdio.h>
# include "mystr.h"

void main() {
    printf("str copy program:\n");
    
    char from[] = "hello";
    int from_count = strcount(from);

    printf("from = %s\n", from);
    printf("strcount from = %i\n", from_count);
    
    char to[from_count];
    strcp(from, to, from_count);
    int to_count = strcount(to);

    printf("to = %s\n", to);
    printf("strcount to = %i\n", to_count);
}
