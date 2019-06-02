
//
// Node
//
typedef struct Node Node;

Node* newnode(char* value);

//
// List
//
typedef struct List List;

List* newlist();

void freelist(List* t);

int len(List* t);

bool isempty(List* t);

List* addhead(List* t, char* value);

List* addtail(List* t, char* value);

bool hasitem(List* t, char* item);

//
// Utils
//
void print(List* t);
