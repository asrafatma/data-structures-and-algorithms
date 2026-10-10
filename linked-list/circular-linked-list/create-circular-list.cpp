#include <iostream>
using namespace std;

class CircularLinkedList {
    struct Node {
        int data;
        Node *next;
    }*head;

public:
    void insertAtEnd(int val);
    void display();

    CircularLinkedList() {
        head = NULL;
    }
};

int main(){
    return 0;
}