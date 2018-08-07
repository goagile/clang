#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

//
// Список имеет ссылку на начальный узел и счетчик количества узлов
//
struct List {
	Node* head;
	Node* tail;
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
	t->tail = NULL;
	t->count = 0;
	return t;
}

//
// Конструктор узла создает узел с данными (строкой)
// 
Node* newnode(char* value) {
	Node* n = malloc(sizeof(Node*));
	n->value = value;
	n->next = NULL;
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
	if (t->count == 0) {
		t->tail = n;
	}
	t->count += 1;
	return t;
}

//
// Добавляет узел в конец списка и увеличивает счетчик длины
//
List* addtail(List* t, char* value) {
	Node* n = newnode(value);
	if (t->count == 0) {
		t->head = n;
		t->tail = n;
	} else {
		Node* p = t->tail; 
		p->next = n;
		t->tail = p->next;
	}
	t->count += 1;
	return t;
}

//
// Проверяет находится ли элемент в списке
//
bool hasitem(List* t, char* item) {
	Node* n;
	for (n = t->head; n != NULL; n = n->next) {
		if (n->value == item) {
			return true;
		}
	}
	return false;
}

//
// Возвращает новый список с элементами в обратном порядке
//
List* reversed(List* t) {
	List* res = newlist();
	Node* n;
	for (n = t->head; n != NULL; n = n->next) {
		res = addhead(res, n->value);
	}
	return res;
}

//
// Разворачивает список 'на месте'
//
void reverse(List* t) {
	Node* curr = t->head;
	Node* next = NULL;
	Node* prev = NULL;
	while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	t->head = prev;
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
	List* a = newlist();

	// Печатаем первоночальное состояние списка
	printf("\nСписок:\n");
	printf("len: %i\n", len(a));
	printf("isempty: %s\n", (isempty(a))? "TRUE":"FALSE");

	// Заполняем список элементами с начала
	a = addhead(a, "Closure");
	a = addhead(a, "Scala");
	a = addhead(a, "Erlang");
	a = addhead(a, "Haskell");
	a = addhead(a, "Lisp");
	a = addhead(a, "Go");
	a = addhead(a, "Python");
	a = addhead(a, "C");

	// Печатаем список после добавления элементов
	printf("\nСписок:\n");
	printf("len: %i\n", len(a));
	printf("isempty: %s\n", (isempty(a))? "TRUE":"FALSE");	
	print(a);
	
	// Освобождаем память занятую списком
	freelist(a);


	// ------------------------------------------------

	List* b = newlist();

	// Печатаем первоночальное состояние списка
	printf("\nСписок b:\n");
	printf("len: %i\n", len(b));
	printf("isempty: %s\n", (isempty(b))? "TRUE":"FALSE");

	b = addtail(b, "C");
	b = addtail(b, "Python");
	b = addtail(b, "Go");
	b = addtail(b, "Lisp");
	b = addtail(b, "Haskell");
	b = addtail(b, "Erlang");
	b = addtail(b, "Scala");
	b = addtail(b, "Closure");

	// Печатаем список после добавления элементов
	printf("\nСписок b:\n");
	printf("len: %i\n", len(b));
	printf("isempty: %s\n", (isempty(b))? "TRUE": "FALSE");
	
	// ------------------------------------------------
	
	// Проверяем находится ли элемент в списке
	bool n = hasitem(b, "Haskell");
	printf("hasitem Haskell: %s\n", n? "TRUE": "FALSE");

	bool m = hasitem(b, "Kotlin");
	printf("hasitem Kotlin: %s\n", m? "TRUE": "FALSE");

	print(b);

	// ------------------------------------------------
	
	// Получаем новый список с элементами в обратном порядке
	List* c = reversed(b);
	printf("\nreversed b = c: \n");
	print(c);
	
	// Разворачиваем список 'на месте'
	reverse(c);
	printf("\nreverse c: \n");
	print(c);
	
	freelist(c);

	freelist(b);

	return 0;
}
