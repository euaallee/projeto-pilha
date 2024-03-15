//IMPLEMENTAÇÃO
#include <stdio.h>
#include <stdlib.h>
#include "plh.h"

void criarPilha(Pilha* p){
	p->topo = -1;
	printf("Pilha inicializada!\n");
}

int vazia(Pilha p){
	return(p.topo == -1);
}

int cheia(Pilha p){
	return(p.topo == MAX - 1);
}

void push(Pilha* p, int item){
	if(cheia(*p)){
		printf("A insercao de %d provoca OVERFLOW\n", item);
	}else{
		p->topo++;
		p->itens[p->topo] = item;
		//printf("%d foi empilhado!\n", item);
	}
}

int pop(Pilha* p){
	int ret = -1;
	if(vazia(*p)){
		printf("A operacao provoca UNDERFLOW\n");
	}else{
		ret = p->itens[p->topo];
		p->topo--;
	}
	return ret;
}

int top(Pilha p){
	int ret = -1;
	if(!vazia(p)){
		ret = p.itens[p.topo];
	}
	return ret;
}

void show(Pilha p){
	printf("P:[ ");
	while(!vazia(p)){
		printf("%d ", pop(&p));
	}
	printf("]\n");
}

void showElemento(Pilha p, int elem){
	int elemento = 0, item;
	Pilha pTemp;
	
	criarPilha(&pTemp);
	
	while (!vazia(p)){
		item = pop(&p);
		if (item == elem){
			elemento = 1;
			printf("PILHA: O elemento %d foi encontrado.\n", item);
			break;
		}
		push(&pTemp, item);
	}
	
	while (!vazia(pTemp)){
		push(&p, pop(&pTemp));
	}
	
	if (!elemento) {
		printf("PILHA: O elemento %d nao foi encontrado.\n", elem);
	}
}

void contarElemento(Pilha p, int elem) {
	int elemento = 0, item;
	Pilha pTemp;
	
	criarPilha(&pTemp);
	
	while (!vazia(p)){
		item = pop(&p);
		if (item == elem){
			elemento++;
		}
		push(&pTemp, item);
	}
	
	while (!vazia(pTemp)){
		push(&p, pop(&pTemp));
	}
	
	printf("PILHA: O elemento %d aparece %d vezes na pilha.\n", elem, elemento);
}

int tamanhoPilha(Pilha p) {
	return p.topo + 1;
}