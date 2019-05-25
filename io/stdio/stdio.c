# include <stdio.h>
# include <stdlib.h>

void error(char *msg);

int main(void) {
    
    int c;

    while ((c = fgetc(stdin)) != EOF)
        if (fputc(c, stdout) == EOF)
            error("ошибка вывода");
    
    if (ferror(stdin))
        error("ошибка ввода");

    exit(0);
}

void error(char *msg) {
    fprintf(stderr, "%s", msg);
    exit(1);
}
