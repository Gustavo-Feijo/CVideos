/*
 * Computadores apresentam grande capacidade para realização de operações matemáticas.
 * Contudo, nesta parte, apenas operações simples serão abordadas.
 */
#include <stdio.h>
int main()
{

    int x = 5;
    // Podemos realizar diversas operações matemáticas, como soma,multiplicação,subtração,divisão, etc.
    // Normalmente, iremos realizar tais operações em cima de variaveis.
    printf("Valor inicial: %d\n", x);
    x = x + 5; // Neste caso, falamos que o valor de x passa a ser o valor atual de x, mais o valor 5.
    printf("Valor após adicionar 5: %d\n", x);
    x += 2; // Também podemos utilizar essa abreviação da expressão.
    printf("Valor após adicionar 2: %d\n", x);

    // Todas expressões abaixo serão abreviadas, mas é possivel utilizar elas com o primeiro simbolo, exemplo: 4 * 5, que resulta em 20.
    x -= 10; // x = x - 10
    printf("Valor após subtrair 10: %d\n", x);

    x *= 20; // x = x * 20
    printf("Valor após multiplicar por 20: %d\n", x);

    x /= 5; // x = x / 5
    printf("Valor após dividir por 5: %d\n", x);

    // Também podemos utilizar algumas expressões diferentes, como o %, que irá retornar a sobra de uma divisão.
    x %= 3; // Ao dividiro o valor de x (8) por 3, teriamos 2.6666..., com o %, iremos ter apenas o valor que sobra antes de criar a parte decimal, no caso, 8-6 = 2;
    printf("Resto da divisão por 3: %d\n", x);

    // Também podemos aumentar e diminuir o valor de uma variavel em 1 através de:
    x++; // x +=1 ou x = x + 1
    x--;
    // Ambos somam/diminuem 1 do valor.

    // Outras operações estão disponiveis na biblioteca padrão 'math.h'
    // Ps: Expressões apresentam ordem de execução.
    printf("%d\n", 5 + 2 * 4); // Primeiro verifica o 2*4, depois o 5+2. Podemos utilizar parentesis para alterar isto.
    printf("%d\n", (5 + 2) * 4);
    return 0;
}