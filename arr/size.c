#include <stdio.h>

int main() {
	char a[][20] = { "Go", "Python", "C" };
	char b[][20] = { "Go", "Python" };
	char c[][20] = { "Go" };
	char d[][20] = {};
	printf("len a = %i\n", sizeof(a) / sizeof(a[0]));
	printf("len b = %i\n", sizeof(b) / sizeof(b[0]));
	printf("len c = %i\n", sizeof(c) / sizeof(c[0]));
	printf("len d = %i\n", sizeof(d) / sizeof(d[0]));
	return 0;
}
