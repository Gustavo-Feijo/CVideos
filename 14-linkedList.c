#include <stdio.h>
#include <stdlib.h>

// Simplifica a criação de um novo node.
typedef struct Node
{
    int val;
    struct Node *next;
} ListNode;

// Funções.
ListNode *createNode(int val);
void runPrintFree(ListNode *cur);

int main()
{
    // Cria o primeiro node.
    ListNode *head = createNode(0);
    if (head == NULL)
    {
        printf("Não foi possível criar o head.\n");
        exit(EXIT_FAILURE);
    }

    // Ponteiro para inicio da lista, visando percorrer ela enquanto mantém o endereço original no head.
    ListNode *current = head;

    // Cria nodes enquanto o valor atual é menor do que 15.
    while (current->val < 15)
    {
        // Cria o próximo node.
        current->next = createNode(current->val + 1);

        // Termina o loop caso seja nulo.
        if (current->next == NULL)
        {
            printf("Não foi possível criar um novo node.\n");
            break;
        }
        // Vai pro próximo.
        current = current->next;
    }

    // Escreve todos elementos e limpa.
    runPrintFree(head);

    return 0;
}

// Retorna um novo node.
ListNode *createNode(int val)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if (newNode == NULL)
    {
        return NULL;
    }
    newNode->next = NULL;
    newNode->val = val;
    return newNode;
}

// Limpa todos nodes.
void runPrintFree(ListNode *cur)
{
    ListNode *temp;

    while (cur != NULL)
    {
        printf("%d\n", cur->val);
        temp = cur;
        cur = cur->next;
        free(temp);
    }
}
