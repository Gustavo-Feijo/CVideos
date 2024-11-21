/**
 * Structs são, em essência, estruturas mais complexas de dados, personalizaveis, e bem delimitadas.
 */
#include <stdio.h>

// Struct com 3 campos.
struct Pessoa
{
    float altura;
    char *nome; // Ponteiro para receber um nome de tamanho variado.
    float peso;
};
void mudaPeso(struct Pessoa *p, float peso);
int main()
{
    // Criação de uma struct de tipo Pessoa com nome de eu.
    struct Pessoa eu;
    // Atribuição da altura, nome e peso.
    eu.altura = 1.7;
    eu.nome = "Gustavo";
    eu.peso = 87;

    mudaPeso(&eu, 84.8);
    // Escrevendo os valores da struct.
    // Usando .2f e .1f para formatar o output. .2f limita a 2 pontos decimais, .1f a 1 ponto decimal.
    printf("Eu me chamo %s, tenho %.2f de altura e peso %.1f Kg\n", eu.nome, eu.altura, eu.peso);
    return 0;
}

void mudaPeso(struct Pessoa *p, float peso)
{
    p->peso = peso;
}
