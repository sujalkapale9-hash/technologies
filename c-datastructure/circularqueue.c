#include <stdio.h>
#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue is Full!\n");
    } else {
        if (front == -1) 
            front = 0;
        rear = (rear + 1) % SIZE;
        cq[rear] = item;
        printf("Inserted: %d\n", item);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("Deleted: %d\n", cq[front]);
        if (front == rear) {  
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue: ");
        int i = front;
        while (1) {
            printf("%d ", cq[i]);
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
