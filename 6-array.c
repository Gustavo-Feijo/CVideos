/*
 * Arrays são estruturas de dados que correspondem a dados de forma sequencial e mesmo tipo. (Em C, outras linguagens apresentam estruturas diferentes)
 * Basicamente corresponde a criação de um espaço de memória maior. Por exemplo, se um int ocupa 4 bytes de memória, um array com 3 ints ocupará 12 bytes (3 * 4)
 * Arrays são uteis por estarem em espaços sequencias de memória, sendo extremamente rápido percorrer cada elemento.
 * Por exemplo, se o endereço inicial de um array com 3 elementos é x, o endereço do primeiro elemento será x, o do segundo será x + quantidade de bytes do tipo.
 */
#include <stdio.h>

int main()
{
    // Utilizamos colchetes '[]' para denotar arrays.
    // Aqui estamos criando um array com 5 ints, e atribuindo o nome de array. Não atribuimos um valor inicial neste caso.
    int array[5];
    // Podemos acessar elementos de um array com seu indice.
    // Caso tentemos acessar um elemento do array agora, teremos um valor sem qualquer nexo, visto que não atribuimos valor.
    // Podemos acessar um elemento do array através de seu nome e indice, indices sendo suas posições no array.
    // O array inicia a partir do indice 0, portanto, o array com 5 elementos, terá indices: 0,1,2,3,4.
    array[0] = 15;
    array[1] = 2;
    array[2] = 4;
    array[3] = 9;
    array[4] = 32;

    // Neste ponto, cada elemento do array possui um valor, e podemos acessar tal valor.
    printf("%d\n", array[3]);

    // Podemos já criar um array com valores.
    int arrayComValores[] = {5, 4, 3, 8, 1, 2, 10};
    printf("%d\n", arrayComValores[5]);

    // No exemplo acima, não foi especificado o número de elementos do array na sua criação, pois já estamos criando eles ao mesmo tempo.
    // Sendo possivel para o compilador identificar o tamanho do array.
    // Um exemplo de uso de arrays são as strings, conjunto de caracteres utilizados para formar frases e palavras.
    // Ao escrever printf("Hello World"); a parte "Hello World" é uma string, sendo um array de chars.

    char palavra[] = "Laranja";
    printf("%s\n", palavra);
    // No exemplo acima, criei um array de caracteres e atribui a palavra "Laranja" à ele. É utilizado o %s para escreve uma string no printf.
    // Um adendo, contudo, é que o tamanho deste array é fixo, não sendo possivel botar uma palavra maior nele.
    // Strings apresentam um tamanho equivalente ao da palavra + 1, visto que apresentam um caractere pra indicar o fim da string.
    // A principio, apenas é essencial saber que arrays são espaço de memória seguidos e que podemos acessar com seu indice.
    return 0;
}