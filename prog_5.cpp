#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;


void insert(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
    }
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        cout << value << " inserted\n";
    }
}


void deleteElement() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
    }
    else {
        cout << queue[front] << " deleted\n";
        front++;
    }
}


void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty\n";
    }
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}
