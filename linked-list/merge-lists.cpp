#include <iostream>
using namespace std;

class SinglyLinkedList {
    struct Node {

        int data;
        Node *next;

    } *p;

public:

    SinglyLinkedList() {
        p = NULL;
    }

    void insertAtEnd();
    void mergeSortedList(SinglyLinkedList &other);
    void display();
};

void SinglyLinkedList::insertAtEnd() {

    int x;

    cout << "Enter the data in the node: ";
    cin >> x;

    Node *newNode = new Node();

    newNode->data = x;
    newNode->next = NULL;

    if (p == NULL) {

        p = newNode;

    } else {

        Node *temp = p;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}