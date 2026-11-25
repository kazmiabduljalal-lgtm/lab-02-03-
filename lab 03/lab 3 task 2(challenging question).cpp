#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* next;
};

int main() {
    const int n = 5;
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter " << n << " integer values: ";

    // 1. Create five nodes dynamically using user input and link them
    for (int i = 0; i < n; i++) {
        Node* newNode = new Node;
        cin >> newNode->data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 2. Traverse the list from beginning to end and count nodes
    Node* temp = head;
    int count = 0;

    while (temp != NULL) {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL Total nodes: " << count << endl;

    // 3. Release dynamically allocated memory
    temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
    tail = NULL;

    return 0;
}
