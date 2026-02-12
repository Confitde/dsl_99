#include <iostream>
using namespace std;
#define MAX 5  
int stackArr[MAX];
int top = -1;
void push(int value)
{
    if(top == MAX - 1)
    {
        cout << "Cannot push " << value << endl;
    }
    else
    {
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack.\n";
    }
}
void pop(){
    if(top == -1)
    {
        cout << " Stack is empty.\n";
    }
    else
    {
        cout << stackArr[top] << " popped from stack.\n";
        top--;
    }
}
void peek(){
    if(top == -1)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}
void display()
{
    if(top == -1)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Stack elements are:\n";
        for(int i = top; i >= 0; i--)
        {
            cout << stackArr[i] << endl;
        }
    }
}
int main()
{
    int choice, value;

    do
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}

