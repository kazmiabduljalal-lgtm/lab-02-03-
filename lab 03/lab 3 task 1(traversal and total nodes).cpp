#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* next;
};

int main() {
    // 1. Create five nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // 2. Store values and connect the nodes
    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 25;
    fifth->next = NULL;

    // 3. Traverse the list and count nodes
    Node* temp = head;
    int count = 0;

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // 4. Display total number of nodes
    cout << "Total nodes: " << count << endl;

    // 5. Release dynamically allocated memory using a loop
    temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;

    return 0;
}
