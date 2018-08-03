#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	char* name;
	struct node* next;
} node;


node* newlist(char* name) {
	node* list = malloc(sizeof(node*));
	list->name = name;
	return list;
}

node* tail(node* start) {
	node* i = start;
	while (i != NULL) {
		i = i->next;
	}
	return i;
}

node* append(node* list, char* name) {
	node* n1 = newlist(name);
	node* x = tail(list);
	x->next = n1;
	return x;
}

void printlist(node* start) {
	node* i = start;
	while (i != NULL) {
		printf("next: %s\n", i->name);
		i = i->next;
	}
}


void freelist(node* start) {
	node* i = start;
	while (i != NULL) {
		free(i);
		i = i->next;
	}
}


int main() {
	node* list = newlist("R");
	// node* list = malloc(sizeof(node*));
	// list->name = "R";

	append(list, "N1");
	append(list, "N2");
	
	// node* n1 = malloc(sizeof(node*));
	// n1->name = "N1";
	// list->next = n1;

	printlist(list);

	freelist(list);
	
	return 0;
}
