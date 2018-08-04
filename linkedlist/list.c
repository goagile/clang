#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

//
// Список имеет ссылку на начальный узел и счетчик количества узлов
//
struct List {
	Node* head;
	int count;
};

//
// Узел (Элемент) списка
//
struct Node {
	char* value;
	struct Node* next;
};

//
// Конструктор списка создает пустой список (с 0 элементов)
//
List* newlist() {
	List* t = malloc(sizeof(List*));
	t->head = NULL;
	t->count = 0;
	return t;
}

//
// Конструктор узла создает узел с данными (строкой)
// 
Node* newnode(char* value) {
	Node* n = malloc(sizeof(Node*));
	n->value = value;
	return n;
}

//
// Освобождение памяти, выделенной под список
//
void freelist(List* t) {
	Node* n;
	for (n = t->head; n != NULL; n = n->next) {
		free(n);
	}
	free(t);
}

// 
// Возвращает длину (количество элементов) списка 
//
int len(List* t) {
	return t->count;
}

//
// Возвращает TRUE если список пуст
//
bool isempty(List* t) {
	return (0 == len(t));
}

//
// Добавляет узел в начало списка и увеличивает счетчик длины
//
List* addhead(List* t, char* value) {
	Node* n = newnode(value);
	n->next = t->head;
	t->head = n;
	t->count += 1;
	return t;
}

//
// Печатает список со всеми элементами
//
void print(List* t) {
	Node* n;
	int i;
	for (n = t->head, i = 0; n != NULL; n = n->next, i += 1) {
		printf("%i: %s\n", i, n->value);
	}
}

int main() {
	// Создаем новый односвязный список
	List* langs = newlist();

	// Печатаем первоночальное состояние списка
	printf("\nСписок:\n");
	printf("len: %i\n", len(langs));
	printf("isempty: %s\n", (isempty(langs))? "TRUE":"FALSE");

	// Заполняем списко элементами с начала
	langs = addhead(langs, "Closure");
	langs = addhead(langs, "Scala");
	langs = addhead(langs, "Erlang");
	langs = addhead(langs, "Haskell");
	langs = addhead(langs, "Lisp");
	langs = addhead(langs, "Go");
	langs = addhead(langs, "Python");
	langs = addhead(langs, "C");

	printf("\nСписок:\n");
	printf("len: %i\n", len(langs));
	printf("isempty: %s\n", (isempty(langs))? "TRUE":"FALSE");	
	print(langs);
	
	// Освобождаем память занятую списком
	freelist(langs);
	
	return 0;
}
