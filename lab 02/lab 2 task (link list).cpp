#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* newNode;

    // Creating 5 nodes dynamically
    for (int i = 0; i < 5; i++)
    {
        newNode = new Node;

        cout << "Enter value for node " << i + 1 << ": ";
        cin >> newNode->data;

        newNode->prev = tail;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode;
        }

        tail = newNode;
    }

    // Forward Traversal
    cout << "\nForward Traversal:\n";

    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal:\n";

    temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    // Counting Total Nodes
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "\nTotal Nodes: " << count << endl;

    // Releasing Memory
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
