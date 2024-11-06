/*
 * Ponteiros são um conceito mais complexo em programação, sendo utilizados para manipulação direta da memória.
 * Um ponteiro nada mais é do que um endereço de memória armazenado.
 * Por exemplo:
 * Uma variavel X, em um endereço de memória Y, tem valor Z.
 * Um ponteiro para esta variavel seria: Um ponteiro K, em um endereço de memória J, com valor Y (Endereço de memória de X)
 * Com isto, eu consigo acessar diretamente o endereço de memória de X.
 * Ponteiros são uteis para trabalhar com arrays e estruturas mais complexas, na qual passar os valores como parametros seria ineficiente.
 */
#include <stdio.h>
int main()
{
    // Váriavel comum.
    int x = 5;
    // Ponteiros introduzem 2 modificadores que iremos utilizar.
    // &nomeDaVariavel -> & irá pegar o ENDEREÇO DA VARIAVEL.
    // *ptr_x -> * irá criar o ponteiro. Também será utilizado para acessar o valor.
    int *ptr_x = &x; // Agora, o ponteiro ptr_x tem como seu valor o endereço de memória de x.

    // %p irá escrever o endereço na memória.
    printf("%p\n", ptr_x);

    // Para acessar o valor no endereço de memória que o ponteiro está apontando, utilizamos o * novamente.
    printf("%d\n", *ptr_x); // Aqui estamos acessando o valor no endereço de memória armazenado no ponteiro, ou seja, o valor de x.

    /**
     * *ptr_x = Valor no endereço de memória.
     * ptr_x = Endereço em si.
     * Basicamente o * irá fazer o papel de buscar o valor no endereço.
     */

    // Mesmo após mudar o valor de x, *ptr_x ainda terá acesso ao valor, visto que apenas mudamos o valor presente no endereço de memória.
    x = 10;
    printf("%d\n", *ptr_x); // Aqui estamos acessando o valor no endereço de memória armazenado no ponteiro, ou seja, o valor de x.

    // Aqui estamos alterando o valor no endereço de memória que ptr_x está apontando, ou seja, estamos alterando o valor de x sem sequer fazer referencia ao x.
    *ptr_x = 20;
    printf("%d\n", x);

    // Ponteiros trazem grande flexibilidade, sendo possivel alterar valores sem sequer ter acesso direto a eles.

    // Outra utilidade dos ponteiros é para trabalhar com arrays.
    int array[5] = {1, 2, 3, 4, 5};

    // Não utilizamos o &, pois, da forma que o array por si só funciona, ele é o endereço em si.
    int *ptr_arr = array;
    printf("Valor apontado pelo ponteiro: %d\n", *ptr_arr);

    // Neste caso, como não utilizamos o '*' antes do ponteiro, estamos mudando o endereço de memória que ele armazena.
    printf("Endereço do ponteiro para o array: %p\n", ptr_arr);
    ptr_arr++;
    printf("Endereço do ponteiro para o array pós incremento: %p\n", ptr_arr);

    // Ao acessar o endereço agora, estamos acessando o valor do próximo elemento do array.
    printf("Valor apontado pelo ponteiro pós incremento: %d\n", *ptr_arr);

    return 0;
}