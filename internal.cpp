#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

void insertFront(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Overflow\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front = front - 1;
    }

    deque[front] = val;
    printf("Inserted at front\n");
}

void deleteRear() {
    if (front == -1) {
        printf("Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear = rear - 1;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    int i = front;
    printf("Deque elements: ");

    while (1) {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1.Insert at Beginning");
        printf("\n2.Delete at End");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                deleteRear();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}            
