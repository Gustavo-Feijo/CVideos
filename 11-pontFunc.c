/**
 * Exemplo de uso de ponteiros com funções.
 */
#include <stdio.h>

// Void function que rececbe um ponteiro/endereço de memória.
void mudaPra20(int *ptr);
int main()
{
    int x = 0;
    // Passando o endereço de x pra função.
    mudaPra20(&x);
    // Printando o valor de x.
    printf("%d\n", x);
}
// Implementação da função pra trocar o valor do ponteiro.
void mudaPra20(int *ptr)
{
    // Mudando o valor presente no ponteiro para 20.
    // Irá mudar o valor de x, mesmo não estando no mesmo escopo.
    *ptr = 20;
}