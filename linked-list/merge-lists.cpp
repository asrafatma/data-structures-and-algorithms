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

void SinglyLinkedList::mergeSortedList(
    SinglyLinkedList &other) {

    Node *list1 = p;
    Node *list2 = other.p;

    Node *newHead = NULL;
    Node *last = NULL;

    while (list1 != NULL &&
           list2 != NULL) {

        Node *selected;

        if (list1->data <= list2->data) {

            selected = list1;
            list1 = list1->next;

        } else {

            selected = list2;
            list2 = list2->next;
        }

        if (newHead == NULL) {

            newHead = selected;
            last = selected;

        } else {

            last->next = selected;
            last = selected;
        }
    }

    if (list1 != NULL) {
        last->next = list1;
    }

    if (list2 != NULL) {
        last->next = list2;
    }

    p = newHead;

    other.p = NULL;
}

void SinglyLinkedList::display() {

    Node *temp = p;

    while (temp != NULL) {

        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << "NULL" << endl;
}