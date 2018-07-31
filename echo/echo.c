#include <stdio.h>

int main() {
	char line[80];
	printf("Введите строку:\n");
	scanf("%80s[^\n]", line);
	printf("Вы ввели строку:\n");
	printf("%s\n", line);
	return 0;
}
