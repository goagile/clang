#include <stdio.h>
#include <string.h>

typedef struct {
	char *last;
	char first[20];
	char middle[20];
	int  day;
	char month[20];
	int  year;
} Person;

void printperson(Person p) {
	printf("\nPerson:\n");
	printf("    last: %s\n", p.last);
	printf("    first: %s\n", p.first);
	printf("    middle: %s\n", p.middle);
	printf("    day: %i\n", p.day);
	printf("    month: %s\n", p.month);
	printf("    year: %i\n", p.year);
	printf("\n");
}

Person scanPerson(char line[]) {
	Person p;
	char *last;
	char *format = "%[^,],%[^,],%[^,],%i,%[^,],%i";
	sscanf(line, format, &last, p.first, p.middle, &p.day, p.month, &p.year);
	return p;
}

int main() {
	// get person
	Person p = scanPerson("Петров,Иван,Сидорович,21,мая,1979");

	// edit person
	// p.middle = "Петрович";

	// print person
	printperson(p);

	return 0;
}
