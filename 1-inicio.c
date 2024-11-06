/*
 * C é uma linguagem de programação de nível intermediario, com capacidade de acesso à memória de forma direta.
 * É amplamente utilizada no desenvolvimento de sistemas (Windows e Linux por exemplo) e microcontroladores (Arduino, automação no geral)
 * É fortemente typada, ou seja, é necessário definir o tipo de cada valor.
 */

// C é uma linguagem compilada, ou seja, o código será traduzido para uma linguagem compreensível para o computador (Binário).
// Para compilar e executar, teremos de rodar:

// gcc 1-inicio.c -o inicio  -> -o cria um objeto executável, este sendo chamado inicio, passamos primeiro o nome do arquivo em C. Para windows, será inicio.exe
// Para executar o objeto criado, iremos inserir no terminal: ./inicio no linux e .\inicio.exe no Windows.

// O fluxo do código é de cima para baixo, ou seja, seguirá sempre a ordem de execução assim, exceto em casos especificos.
// Função main, ponto de entrada do código.

#include <stdio.h> // Adicionamos uma biblioteca padrão para entrada e saida.
int main()
{

    // Isto está dentro de um bloco de código.
    // Blocos de código são delimitações de onde parte do código está.

    // Podemos utilizar funções para escrever coisas em nosso terminal, por exemplo, a função printf().
    printf("Hello World\n");
    // Dentro do parenteses adicionamos aspas duplas "", junto ao que será escrito dentro delas. Todo parenteses deve ser fechado com seu correspondente.
    // Ao final de cada expressão é necessário utilizar o ';'
    // O \n ao final da frase indica a criação de uma nova linha, semelhante à um 'enter' em um texto.

    // Podemos também escrever valores diferentes, como números, através de códigos especificos.
    printf("%d\n", 16);
    // Acima, estamos escrevendo um número, para isto, utilizamos %d dentro das aspas, seguido de ',valor'.
    // Neste caso, o valor 16 será impresso.
    // O código %d é especifico para números inteiros, há variações que serão abordadas posteriormente.

    // Return 0 indica que o programa finalizou sem erros, qualquer valor diferente de 0 indica erro.
    return 0;
}