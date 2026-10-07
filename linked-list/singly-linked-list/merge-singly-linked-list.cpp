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

