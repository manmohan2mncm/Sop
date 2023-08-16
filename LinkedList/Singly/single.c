#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* initializeList() {
    return NULL;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

void deleteNode(struct Node** head, int data) {
    if (*head == NULL) {
        return;
    }
    
    if ((*head)->data == data) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    struct Node* prev = *head;
    struct Node* current = (*head)->next;
    
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }
    
    if (current != NULL) {
        prev->next = current->next;
        free(current);
    }
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = initializeList();

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);

    printf("Singly Linked List: ");
    printList(head);

    deleteNode(&head, 20);

    printf("Singly Linked List after deleting a node: ");
    printList(head);

    // Free memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
