/*
 * Loops são estruturas de controle de fluxo responsáveis por criar repetição.
 * Pode ser utilizado, por exemplo, para percorrer um array.
 */
#include <stdio.h>
int main()
{
    // Possuimos diferentes tipos de loops, sendo os 2 principais o for e while.

    // O loop for recebe um valor inicial, uma condição de execução e algo para fazer ao final de cada iteração.
    // for(valor inicial;condição de execução;fazer ao final da iteração).
    // Ele executa o bloco de código durante cada iteração.
    // No exemplo abaixo, o valor inicial é um int de nome i, com valor inicial 0, ele irá verificar se o valor é menor que 10, se for, irá escrever o valor.
    // Após escrever o valor, irá aumentar em 1 o mesmo.
    // Neste caso, o i está sendo criado dentro do escopo do loop for, isto signfica que ele é acessivel apenas dentro do mesmo.
    for (int i = 0; i < 10; i++)
    {
        printf("I no for: %d\n", i);
        // O ultimo valor escrito será 9, pois ele primeiro executa a verificação, depois executa o bloco e por ultimo aumenta.
        // Na próxima iteração após o 9 a condição passará a ser falsa..
    }
    // Aqui o i já não é mais acessivel.

    // Aqui criei o i fora do loop, portanto sendo acessivel após o fim do mesmo.
    int i = 15;
    // O loop while é mais simples, apresentando apenas a condição de execução.
    // Enquanto a condição for verdadeira ele irá executar. Caso a condição nunca vire falsa, então teremos um loop infinito.
    while (i > 0)
    {
        printf("I no while: %d\n", i);
        // Diminuimos o valor de i manualmente.
        i--;
    }
    // Como criamos o i fora do loop, ele ainda será acessivel aqui.
    printf("I após o fim do while: %d\n", i);

    // O outro exemplo é o do{} while();

    // O do while executa o bloco uma vez, e depois repete caso a condição seja verdadeira.
    // Faz o mesmo papel do while, mas realizar o código ao menos uma vez antes de checar a condição.
    do
    {
        printf("Do While rodando");
    } while (1 == 0);

    // Um exemplo de aplicação para um loop:
    // Criamos um array de 15 elementos.
    int array[15];
    // Iremos percorrer o valor j de 0 à 14. (Indices disponiveis no array).
    for (int j = 0; j < 15; j++)
    {
        array[j] = j; // Atribuimos o valor de j ao indice. Será um array com todos números de 0 à 14 em ordem.
    }
    // Foi utilizado o j pois o i já existia neste escopo.

    // Por ultimo, há duas keywords que permitem controlar o fluxo do loop.
    // Break e continue.
    for (int k = 0; k < 50; k++)
    {
        // Continue irá pular a iteração, prosseguindo direto para incrementar k.
        if (k == 2)
            continue; // Não apresenta o bloco de código pois é uma unica expressão. Opcional neste caso.
        // Break termina completamente o loop.
        if (k == 4)
            break;
        printf("%d\n", k);
    }
    return 0;
}