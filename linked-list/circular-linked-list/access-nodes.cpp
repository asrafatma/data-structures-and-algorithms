#include <iostream>
using namespace std;

class CircularLinkedList{
    struct Node{
        int data;
        Node *next;
    }*head;

public:
    void AccessNode(int value);
    void display();

    CircularLinkedList(){
        head = NULL;
    }
};

