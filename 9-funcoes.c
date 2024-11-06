/*
 * Funções são, em essência, blocos de código reutilizaveis.
 * Por exemplo, caso eu queira escrever o nome de uma pessoa e a idade, eu posso criar uma função que faça isso diretamente.
 * Funções apresentam tipos, referentes ao valor que retornam.
 * Em C, podemos criar as funções no inicio do arquivo, antes da main, ou após a main. Contudo, ao criar no final, devemos especificar a base da função antes.
 * A base da função nada mais é do que: tipo, nome e parametros.
 */
#include <stdio.h>

int soma(int x, int y); // Está é a definição de uma função, que retorna um int, se chama soma, e recebe como parametro dois ints, um chamado x e o outro, y.
void salve();           // Está é uma void funcion, não retorna nenhum valor. Neste caso, também não recebe parametros.
// Está definição não faz nada, apenas diz que ela existe, iremos dizer o que ela faz no final do arquivo.
int main()
{
    // Atribuimos a variavel resultado o resultado da função soma(5,10);
    // soma(5,10) é a chamada da função, passando os parametros 5 e 10, 5 para o parametro x, e 10 para o y.
    int resultado = soma(5, 10);
    printf("%d\n", resultado);
    salve(); // Chamada da void funcion salve.
    return 0;
}

// Aqui temos o código da função.
// Os parametros possuem um nome que apenas é utilizado no local, pode ser qualquer nome, NÃO É necessário que seja passado uma variavel de nome igual.
int soma(int x, int y)
{
    // Return basicamente implica que, onde quer que a função seja utilizada, o resultado será o valor retornado.
    return x + y;
}

// Código da função salve.
// A função não retorna valor, apenas executa algum código.
void salve()
{
    // Escreve salve no terminal.
    printf("Salve\n");
    // Não retorna valor, apenas volta ao fluxo normal do código.
}

// Funções são extremamente uteis para reduzir repetição, apenas sendo necessário utilizar os parametros que irão mudar.