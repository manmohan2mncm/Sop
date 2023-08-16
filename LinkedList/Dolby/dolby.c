#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head != NULL) {
        newNode->next = head;
        head->prev = newNode;
    }

    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

struct Node* insertAfter(struct Node* head, struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        return head;
    }

    struct Node* newNode = createNode(data);
    newNode->prev = prevNode;
    newNode->next = prevNode->next;

    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }

    prevNode->next = newNode;

    return head;
}

struct Node* insertBefore(struct Node* head, struct Node* nextNode, int data) {
    if (nextNode == NULL) {
        return head;
    }

    struct Node* newNode = createNode(data);
    newNode->prev = nextNode->prev;
    newNode->next = nextNode;

    if (nextNode->prev != NULL) {
        nextNode->prev->next = newNode;
    }

    nextNode->prev = newNode;

    if (nextNode == head) {
        head = newNode;
    }

    return head;
}

struct Node* deleteNode(struct Node* head, struct Node* delNode) {
    if (head == NULL || delNode == NULL) {
        return head;
    }

    if (head == delNode) {
        head = delNode->next;
        if (head != NULL) {
            head->prev = NULL;
        }
    } else {
        if (delNode->prev != NULL) {
            delNode->prev->next = delNode->next;
        }

        if (delNode->next != NULL) {
            delNode->next->prev = delNode->prev;
        }
    }

    free(delNode);

    return head;
}

void printForward(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printBackward(struct Node* tail) {
    struct Node* temp = tail;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtBeginning(head, 5);
    head = insertAfter(head, head->next, 15);
    head = insertBefore(head, head->next, 8); // Inserting before the second node

    printf("Doubly Linked List (Forward): ");
    printForward(head);

    printf("Doubly Linked List (Backward): ");
    // To print backward, find the last node
    struct Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    printBackward(tail);

    head = deleteNode(head, head->next); // Deleting the second node

    printf("Doubly Linked List after deleting a node: ");
    printForward(head);

    // Free memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
