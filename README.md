# Projeto Pilha em C

Este é um projeto de implementação de uma estrutura de dados do tipo Pilha em linguagem C. A pilha é uma estrutura de dados linear que segue o princípio "Last In, First Out" (LIFO), onde o último elemento adicionado é o primeiro a ser removido. Este projeto foi desenvolvido como parte de um exercício em sala de aula, com o objetivo de aprender e praticar conceitos fundamentais de programação e estruturas de dados.

## Funcionalidades Implementadas

O projeto inicial inclui as seguintes funcionalidades básicas:

- Criar uma pilha
- Verificar se a pilha está vazia
- Verificar se a pilha está cheia
- Adicionar um elemento à pilha (push)
- Remover um elemento da pilha (pop)
- Obter o elemento do topo da pilha (top)
- Mostrar todos os elementos da pilha

Além das funcionalidades básicas, foram adicionadas as seguintes funcionalidades:

1. **Verificar a presença de um elemento na pilha:**
   Um procedimento que verifica se um dado elemento está presente na pilha.

2. **Contar o número de ocorrências de um elemento na pilha:**
   Um procedimento que informa quantas vezes um dado elemento está presente na pilha.

3. **Obter o tamanho da pilha:**
   Uma função que retorna o número de elementos presentes na pilha.

## Como Usar

Para utilizar este projeto, basta seguir as etapas abaixo:

1. Clone este repositório em seu ambiente local:

   ```
   git clone https://github.com/seu-usuario/pilha-em-c.git
   ```

2. Compile o código-fonte:

   ```
   gcc pilha.c -o pilha
   ```

3. Execute o programa:

   ```
   ./pilha
   ```

4. Você será apresentado a um menu com diferentes opções. Selecione a opção desejada para realizar uma operação na pilha.

## Exemplo de Menu

```
---------------------------
     MENU - OPERAÇÕES     
---------------------------
1. Adicionar elemento à pilha
2. Remover elemento da pilha
3. Verificar se um elemento está na pilha
4. Contar ocorrências de um elemento na pilha
5. Obter tamanho da pilha
6. Mostrar elementos da pilha
7. Sair
---------------------------
Escolha uma opção: 
```

## Ilustração da Estrutura de Dados Pilha

```
|     |    <- Topo
|  3  |
|  2  |
|  1  |
|__0__|    <- Base
```

## Contribuindo

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma "issue" para discutir possíveis melhorias ou problemas encontrados, ou envie um "pull request" com suas alterações propostas.

Espero que este projeto seja útil para aprender sobre estruturas de dados em C!
