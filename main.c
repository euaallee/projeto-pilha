#include <stdio.h>
#include <stdlib.h>
#include "plh.h"

void menu(){
    printf("\n-------------------------\n");
    printf("Menu de Opcoes:\n");
    printf("1. Inserir elemento na pilha\n");
    printf("2. Remover elemento da pilha\n");
    printf("3. Verificar se um elemento esta na pilha\n");
    printf("4. Contar ocorrencias de um elemento na pilha\n");
    printf("5. Mostrar quantos elementos a pilha possui\n");
    printf("6. Mostrar a pilha\n");
    printf("0. Sair\n");
    printf("-------------------------\n");
    printf("Escolha uma opcao: ");
}

int main() {
	Pilha p1;
	int op, elemento;
	
	criarPilha(&p1);
	
	menu();
	scanf("%d", &op);
	
	while(1){
		switch(op) {
	        case 0:
	        	system("cls");
	            printf("Saindo do programa...\n");
	            system("pause");
	            exit(0);
	            break;
	        case 1:
	        	system("cls");
	            printf("Digite o elemento a ser inserido na pilha: ");
	            scanf("%d", &elemento);
	            push(&p1, elemento);
	            system("pause");
	            break;
	        case 2:
	        	system("cls");
	            printf("Removendo elemento da pilha...\n");
	            pop(&p1);
	            system("pause");
	            break;
	        case 3:
	        	system("cls");
	            printf("Digite o elemento a ser verificado na pilha: ");
	            scanf("%d", &elemento);
	            showElemento(p1, elemento);
	            system("pause");
	            break;
	        case 4:
	        	system("cls");
	            printf("Digite o elemento para saber se repete na pilha: ");
	            scanf("%d", &elemento);
	            contarElemento(p1, elemento);
	            system("pause");
	            break;
	        case 5:
	        	system("cls");
	            printf("A pilha possui %d elementos.\n", tamanhoPilha(p1));
	            system("pause");
	            break;
	        case 6:
	        	system("cls");
	            printf("Elementos na pilha:\n");
	            show(p1);
	            system("pause");
	            break;
	        default:
	        	system("cls");
	            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
	            system("pause");
	            break;
		}
		
		if (op == 0){
			break;
		}
		
		menu();
		scanf("%d", &op);
	}
	return 0;
}

