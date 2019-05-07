

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
