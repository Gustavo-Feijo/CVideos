/*
 * Em programação, podemos executar código baseado em determinadas condições, alterando o fluxo do código baseado nelas.
 * Tais condições são expressões que resultam em lógica booleana, resultando em valores 'true' ou 'false'. True = 0, False = 1.
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x = 5;
    printf("X: %d\n", x);
    // Por exemplo, ao escrever que x é maior do que 2, teremos o resultado 1, visto que a expressão é verdadeira.
    printf("X é maior que 2? %d\n", x > 2);
    printf("X é menor que 5? %d\n", x < 5);         // Expressão falsa, x é IGUAL a 5, não menor.
    printf("X é menor ou igual a 5? %d\n", x <= 5); // Expressão verdadeira, <= verifica se é igual ou menor.
    printf("X é igual a 5? %d\n", x == 5);          // Expressão verdadeira, verifica se é igual a.
    printf("X é diferente de 3? %d\n", x != 3);     // Expressão verdadeira, verifica se é diferente de.

    // Também é possivel associar expressões com lógica booleana.
    printf("Negação (!) de 1: %d\n", !1); // ! representa negação, sempre retornando o contrario da expressão que precede.

    printf("AND/E (&&) de 1 e 0: %d\n", (1 && 0)); // && lógico representa AND/E, apenas retorna verdadeiro caso ambos lados sejam verdadeiros.
    printf("AND/E (&&) de 1 e 1: %d\n", (1 && 1));

    printf("OR/OU || de 1 e 0: %d\n", (1 || 0)); // || lógico representa OR/OU, apenas retorna verdadeiro caso QUALQUER UM dos lados seja verdadeiro.
    printf("OR/OU || de 0 e 0: %d\n", (0 || 0));

    // Também é possivel definir o escopo das comparações com parentesis.

    // Podemos utilizar as condições com o if().
    // If ira receber uma condição e executar ela caso o resultado seja verdadeiro/1.
    if (5 == 5)
    {
        printf("5 é igual à 5.\n");
    }

    // Caso seja falso, o bloco não será executado.
    if (5 == 4)
    {
        printf("5 é igual à 4.\n");
    }
    else
    {
        // Else deve ser adicionado logo após um if, e somente será executado caso a condição do if seja falsa.
        printf("5 é diferente de 4.\n");
    }

    // Também é possivel criar uma cadeia de if->else if.
    if (5 == 5)
    {
        printf("5 é igual à 5.\n");
    }

    // Caso seja falso, o bloco não será executado.
    if (5 == 4)
    {
        printf("5 é igual à 4.\n");
    }
    else if (5 == 3)
    {
        // Verifica se 5 é igual a 3, apenas realiza a verificação se o primeiro if for falso.
        printf("5 é diferente de 4, mas é igual à 3.\n");
    }
    else
    {
        printf("5 é diferente de 4 e 3.\n");
    }

    // Há diversas outras formas de usar condições, um outro exemplo é o operador ternário.
    // O operador ternário simplesmente dá um caso para verdadeiro e um para falso.
    // (condição)? Resultado se verdadeira : Resultado se falsa.

    printf("X é igual à 5? %c\n", (x == 5) ? 'V' : 'F');

    int resultado = (5 == 4);
    char letra = 'A';

    int eminuscula = ((letra >= 97) && (letra <= 122));

    long long int numero = 4219421121959218;
    int epar = ((numero % 2) == 0);
    printf("%d\n", epar);

    // No exemplo acima, caso seja verdadeiro, ele escreve 'V', caso seja falso, ele escreve 'F'.
    return 0;
}