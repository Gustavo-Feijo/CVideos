/*
 * Switchs são estruturas simples, basicamente rodam código baseado em um caso especifico.
 */

#include <stdio.h>
int main()
{
    int x = 1;

    // Switch recebe a variavel ou valor no parentesis, cria um bloco de código, e, a partir dai, utiliza os cases.
    // Ele executara o case referente ao valor, se x for 1, executa o case 1, se for 5, o case 5.
    // O break é utilizado para impedir o case abaixo de ser executado.
    switch (x)
    {
    case 1:
        printf("X é igual à 1\n");
        break;
    case 2:
        printf("X é igual à 2\n");
        break;
    case 5:
        printf("X é igual à 5\n");
        break;
    default: // Default irá executar caso nenhum case seja correspondente.
        printf("Não há case para X\n");
        break;
    }
}