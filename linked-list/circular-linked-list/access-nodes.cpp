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

void CircularLinkedList::AccessNode(int value){

    if (head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head->next;

    while (temp != head) {
        if(temp->data == value){
            cout << "Node found " << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Node not found" << endl;

}

