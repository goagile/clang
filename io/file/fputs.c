# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>

void error(char *msg);

int main(void) {

    const char *path = "./bin/1.txt";

    const char *lines[] = {
        "привет, мир!\n",
        "это файловая запись\n",
        "массива строк\n",
    };

    printf("try to open %s\n", path);

    FILE *fp = fopen(path, "w");
    if (errno)
        error(strerror(errno));

    int i;
    for (i = 0; i < 3; i++)
        if (!fputs(lines[i], fp))
            error("не могу записать");

    exit(0);
}

void error(char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
