#include <stdio.h>
#include <string.h>

struct Person {
	char last[20];
	char first[20];
	char middle[20];
	int  day;
	char month[10];
	int  year;
};

void printperson(struct Person p) {
	printf("\nPerson:\n");
	printf("    last: %s\n", p.last);
	printf("    first: %s\n", p.first);
	printf("    middle: %s\n", p.middle);
	printf("    day: %i\n", p.day);
	printf("    month: %s\n", p.month);
	printf("    year: %i\n", p.year);
}

int main() {
	char line[] = "Петров,Сидор,Петрович,20,мая,1978";
	struct Person p;
	char *format = "%[^,],%[^,],%[^,],%i,%[^,],%i";
	sscanf(line, format, p.last, p.first, p.middle, &p.day, p.month, &p.year);
	printperson(p);
	return 0;
}
