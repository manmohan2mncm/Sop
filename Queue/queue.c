#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int items[MAX_SIZE];
    int front;
    int back;
};

void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->back = -1;
}

int isEmpty(struct Queue *queue) {
    return (queue->front == -1);
}

int isFull(struct Queue *queue) {
    return ((queue->front == 0 && queue->back == MAX_SIZE - 1) || (queue->back == queue->front - 1));
}

void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->back = (queue->back + 1) % MAX_SIZE;
        queue->items[queue->back] = value;
        printf("Enqueued %d into the queue.\n", value);
    }
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1; // Indicates failure
    } else {
        int dequeuedValue = queue->items[queue->front];
        if (queue->front == queue->back) {
            queue->front = -1;
            queue->back = -1;
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        return dequeuedValue;
    }
}

int front(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot get front element.\n");
        return -1; // Indicates failure
    } else {
        return queue->items[queue->front];
    }
}

int back(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot get back element.\n");
        return -1; // Indicates failure
    } else {
        return queue->items[queue->back];
    }
}

int size(struct Queue *queue) {
    if (isEmpty(queue)) {
        return 0;
    } else {
        return (queue->back - queue->front + MAX_SIZE) % MAX_SIZE + 1;
    }
}

void clear(struct Queue *queue) {
    queue->front = -1;
    queue->back = -1;
    printf("Queue cleared.\n");
}

void print(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = queue->front;
        while (i != queue->back) {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", queue->items[queue->back]);
    }
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 12);
    enqueue(&queue, 22);
    enqueue(&queue, 32);

    print(&queue);

    int frontValue = front(&queue);
    if (frontValue != -1) {
        printf("Front element of the queue: %d\n", frontValue);
    }

    int backValue = back(&queue);
    if (backValue != -1) {
        printf("back element of the queue: %d\n", backValue);
    }

    int dequeuedValue = dequeue(&queue);
    if (dequeuedValue != -1) {
        printf("Dequeued %d from the queue.\n", dequeuedValue);
    }

    print(&queue);

    clear(&queue);
    print(&queue);

    return 0;
}
