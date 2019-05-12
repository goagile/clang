

int strcount(char* s) {
    int i;
    char c;
    while((c = s[i]) != '\0')
        i++;
    return i;
}

void strcp(char* from, char* to, int n) {
    for (int i = 0; i < n; ++i) {
        to[i] = from[i];
    }
    to[n] = '\0';
}

void strcat(char* a, char* b, char* z) {
    int a_count = strcount(a);
    int b_count = strcount(b);
    int n = a_count + b_count + 1;

    return r;
}
