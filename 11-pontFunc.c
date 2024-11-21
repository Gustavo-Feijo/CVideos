/**
 * Exemplo de uso de ponteiros com funções.
 */
#include <stdio.h>

// Void function que rececbe um ponteiro/endereço de memória.
void mudaPra20(int *ptr);
void toUpperCase(char *ptr);
int main()
{
    int x = 0;
    char string[] = "laranja";
    // Passando o endereço de x pra função.
    mudaPra20(&x);
    // Printando o valor de x.
    printf("%d\n", x);

    printf("%s\n", string);

    toUpperCase(string);

    printf("%s\n", string);
}
// Implementação da função pra trocar o valor do ponteiro.
void mudaPra20(int *ptr)
{
    // Mudando o valor presente no ponteiro para 20.
    // Irá mudar o valor de x, mesmo não estando no mesmo escopo.
    *ptr = 20;
}

void toUpperCase(char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 97 && *ptr <= 122)
        {
            *ptr -= 'a' - 'A';
        }
        ptr++;
    }
}