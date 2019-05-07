# include <stdio.h>
# define MAXLEN 100

int getln(char a[], int maxlen);
void prntln(char line[], int len);

void main() {
    char line[MAXLEN];
    int n = getln(line, MAXLEN);
    prntln(line, n);
}

void prntln(char line[], int len) {
    int i;
    for (i = 0; i < len; ++i) {
        printf("%c", line[i]);
    }
}

int getln(char line[], int maxlen) {
    char c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        line[i] = c;
        i++;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}
