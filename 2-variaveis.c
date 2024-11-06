/*
 * Em programação utilizamos o conceito de variaveis, espaços de memória que podem receber valores e armazenar os mesmos.
 * Variaveis apresentão diferentes representações binarias, por isso, apresentam diferentes tipos.
 * Um número inteiro e um número decimal apresentam representações diferentes, por isso, utilizam tipos diferentes.
 * Ao criarmos uma váriavel, separamos um espaço de memória à ela e atribuimos um nome que iremos utilizar para referenciar ela.
 */
#include <stdio.h> // Adicionamos uma biblioteca padrão para entrada e saida.
int main()
{
    // Criação de um número inteiro.
    int variavel = 5; // Criamos uma váriavel que recebe um inteiro, chamamos ela de 'variavel' e atribuimos valor 5.
    int teste;        // Criamos uma váriavel, mas não atribuimos valor.
    teste = 10;       // Atribuimos um valor após a inicialização da variavel. Não utilizamos o 'int' no inicio, pois o int é utilizado para criar a váriavel.

    // Escrevemos o valor da variavel.
    printf("%d %d\n", variavel, teste);

    // Criação de uma variavel de tipo float, sendo um número decimal.
    float decimal = 5.43;

    // Escrevemos um float com %f ao invés de %d. Haverá uma tabela a parte com os tipos, valores aceitos e especificadores de formato.
    printf("%f\n", decimal);

    // Criação de um caractere de valor 'b'.
    char caractere = 'b';

    // Escrevemos com %c.
    printf("%c\n", caractere);

    // Um adendo sobre o tipo char. Em essencia, todos valores char são números entre 0 e 255. %c pega o respectivo caractere na tabela ASCII.
    // Ao utilizar %d com o caractere, teremos seu código na tabela ASCII.s
    printf("%d\n", caractere);

    printf("%c\n", 102); // Escrevendo diretamente o caractere na posição 102.

    // Variaveis podem ser modificadas, de diferentes formas, como atribuição de valores diferentes.
    caractere = 'g';
    // Contudo, não podemos mudar o tipo delas da mesma forma.
    // Abaixo, ao atribuir um valor float, ele será inserido como um valor inteiro. (Neste caso, 15, dentro do limite de 255).
    caractere = 15.32;
    printf("%d\n", caractere);

    // Podemos também ler variaveis através do terminal através da função scanf.
    printf("Escreva um caractere:\n");
    scanf("%c", &caractere); // scanf("formato da variavel",&nomeDaVariavel). Necessário utilizar o &.
    printf("%c\n", caractere);
    return 0;
}
// Variaveis são utilizaveis apenas no mesmo bloco de código ou abaixo.
// Ou seja, se eu fizer algo como:

/*
int main(){
    {
    int x = 5;
    }
printf("%d\n",x);
return 0;
}
*/

// No caso acima, a variavel x dentro do bloco de código interno só pode ser acessada dentro dele mesmo ou abaixo.
// Caso ela fosse criada diretamente no bloco da main, funcionaria normalmente.