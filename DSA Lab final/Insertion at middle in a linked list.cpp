#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *tail = NULL;
    int n, value, pos;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Linked List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}