

//
// Определяем имена и псевдонимы для структур данных
//
typedef struct List List;
typedef struct Node Node;

List* newlist();

Node* newnode(char* value);

void freelist(List* t);

int len(List* t);

bool isempty(List* t);

List* addhead(List* t, char* value);

void print(List* t);
