#include <stdio.h>
#include <stdlib.h>
#include "plh.h"

void menu(){
    printf("\n-------------------------\n");
    printf("Menu de Opções:\n");
    printf("1. Inserir elemento na pilha\n");
    printf("2. Remover elemento da pilha\n");
    printf("3. Verificar se um elemento está na pilha\n");
    printf("4. Contar ocorrências de um elemento na pilha\n");
    printf("5. Mostrar quantos elementos a pilha possui\n");
    printf("6. Mostrar a pilha\n");
    printf("7. Verificar se a pilha está vazia\n");
    printf("8. Verificar se a pilha está cheia\n");
    printf("0. Sair\n");
    printf("-------------------------\n");
    printf("Escolha uma opção: ");
}

int main() {
    Pilha p1;
    int op, elemento;

    criarPilha(&p1); // Inicializa a pilha

    while(1){
        menu();
        scanf("%d", &op);

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
                printf("Digite o elemento para contar ocorrências na pilha: ");
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
            case 7:
                system("cls");
                if (vazia(p1))
                    printf("A pilha está vazia.\n");
                else
                    printf("A pilha não está vazia.\n");
                system("pause");
                break;
            case 8:
                system("cls");
                if (cheia(p1))
                    printf("A pilha está cheia.\n");
                else
                    printf("A pilha não está cheia.\n");
                system("pause");
                break;
            default:
                system("cls");
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
                system("pause");
                break;
        }
    }
    return 0;
}
