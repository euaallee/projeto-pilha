//INTERFACE

#define MAX 5

typedef struct {
	int itens[MAX];
	int topo;
} Pilha;

void criarPilha(Pilha* p);
int vazia(Pilha p);
int cheia(Pilha p);
void push(Pilha* p, int item);
int pop(Pilha* p);
int top(Pilha p);
void show(Pilha p);
void showElemento(Pilha p, int elem);
void contarElemento(Pilha p, int elem);
int tamanhoPilha(Pilha p);
