#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista
struct Node {
    int data;
    struct Node* next;

};

// Função para inserir um elemento no inicio da lista
void insertAtBeginning(struct Node** head_ref, int new_data){

    //Aloca memória para o novo nó
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Define os dados e o próximo nó do novo nó
    new_node->data = new_data;
    new_node->next = (*head_ref);

    // Atualiza a cabeça da lista para apontar para o novo nó
    (*head_ref) = new_node;
}


// Função para imprimir os elementos da lista
void printList(struct Node* node) {
    while (node != NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main(){
    // Inicializa a lista como vazia
    struct Node* head = NULL;

    // Insere elementos na lista
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 7);

    // Imprime a lista
    printf("Lista encadeada: ");
    printList(head);

    return 0;
}
