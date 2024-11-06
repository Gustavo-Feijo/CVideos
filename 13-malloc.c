/**
 * Em C, podemos criar arrays de tamanho pré definido através de `tipo nomedavariavel[tamanho  do array]`.
 * Contudo, nem sempre seremos capaz de utilizar tamanhos pré definidos, em algumas situações, necessitaremos de arrays dinamicos.
 * Para isto, surge o malloc.
 */
#include <stdio.h>
#include <stdlib.h> // Adicionando stdlib, onde recebemos a função malloc.

int main()
{
    // malloc é uma função que retorna um void pointer, que, em essência, é um ponteiro sem tipo definido.
    // Basicamente irá realizar a alocação de x bits de memória e retorna o endereço dos mesmos.
    // Neste caso, temos de realizar algo chamado 'casting', que consiste em converter a estrutura da memória para ser tratada com int. (int *) realiza isto.
    // Alocamos um valor equivalente à 5 * o tamanho de um int. sizeof(int) retorna quantos bits um int ocupa.
    int *ptr_x = (int *)malloc(5 * sizeof(int));

    // Este tipo de alocação pode falar, por isto, devemos verificar se o ponteiro não é nulo após sua inicialização.
    if (ptr_x == NULL)
    {
        printf("Não foi possivel alocar o ponteiro.\n");
        return -1;
    }

    // Neste ponto, ptr_x irá se comportar como um array comum.
    ptr_x[0] = 5;
    printf("%d\n", ptr_x[0]);

    // Free é utilizado para liberar este ponteiro, para que a memória possa ser usada novamente.
    free(ptr_x);
    return 0;
}
