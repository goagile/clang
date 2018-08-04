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
	node* n;
	node* last = malloc(sizeof(node*));
	for(n = start; n != NULL; n = n -> next) {
		last = n;
	}
	return last;
}

node* append(node* list, char* name) {
	node* t = tail(list);
	node* n = newlist(name);
	t->next = n;
	return list;
}

void printlist(node* start) {
	node* n;
	int i;
	for (n = start, i = 0; n != NULL; n = n->next, i++) {
		printf("%i: %s\n", i, n->name);
	}
}


void freelist(node* start) {
	node* n;
	for (n = start; n != NULL; n = n->next) {
		free(n);
	}
}


int main() {
	node* langs = newlist("C");
	langs = append(langs, "Python");
	langs = append(langs, "Go");
	langs = append(langs, "Lisp");
	langs = append(langs, "Haskell");
	langs = append(langs, "Erlang");
	langs = append(langs, "Scala");
	langs = append(langs, "Closure");

	printlist(langs);
	freelist(langs);
	
	return 0;
}
