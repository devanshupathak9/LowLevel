#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void insert(Node **head, int value) {
    Node* nxtnode = (Node*)malloc(sizeof(Node));
    nxtnode->data = value;
    nxtnode->next = NULL;
    if (*head == NULL) {
        *head = nxtnode;
        return;
    }
    Node *currNode = *head;
    while (currNode->next){
        currNode = currNode->next;
    }
    currNode->next = nxtnode;
}

void printll(Node *node){
    while (node) {
        printf("%d-",node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    Node* head = NULL;
    insert(&head, 5);
    insert(&head, 9);
    insert(&head, 2);
    insert(&head, 0);
    insert(&head, 12);
    printll(head);
}