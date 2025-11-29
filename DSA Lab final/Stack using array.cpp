#include <iostream>
using namespace std;

#define MAX 5   // Maximum stack size

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push.\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack.\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop.\n";
    } else {
        cout << stack[top] << " popped from stack.\n";
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Top element is: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

void isEmpty() {
    if (top == -1)
        cout << "Stack is Empty.\n";
    else
        cout << "Stack is NOT Empty.\n";
}

void isFull() {
    if (top == MAX - 1)
        cout << "Stack is Full.\n";
    else
        cout << "Stack is NOT Full.\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Is Empty\n";
        cout << "6. Is Full\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
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
                isEmpty();
                break;

            case 6:
                isFull();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}