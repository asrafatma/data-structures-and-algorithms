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

void CircularLinkedList::insertAtEnd(int val) {
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = newNode;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node *temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
} 

int main(){
    return 0;
}