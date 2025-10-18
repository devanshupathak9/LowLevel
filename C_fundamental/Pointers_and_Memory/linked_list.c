#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert(Node **node, int value) {
    Node *nextNode = (Node*)malloc(sizeof(Node));
    nextNode->data = value;
    nextNode->next = NULL;
    if (*node == NULL) {
        *node = nextNode;
    }
    else {
        Node *currNode = *node;
        while (currNode->next) {
            currNode = currNode->next;
        }
        currNode->next = nextNode;
    }
    
}

void print_ll(Node *node) {
    while (node) {
        printf("%d-", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    for (int i = 2; i < 13; i=i+2) {
        insert(&head, i);
    }
    print_ll(head);
}