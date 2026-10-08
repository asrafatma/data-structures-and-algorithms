#include <iostream>
using namespace std;

//LinkedList class
class SinglyLinkedList {
    struct Node {

        int data;
        Node *next;

    } *p; //p->head pointer

public:

    SinglyLinkedList() {
        p = NULL;
    }
    
    //method prototypes
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

int main() {

    SinglyLinkedList list1;
    SinglyLinkedList list2;

    int n1;
    int n2;

    cout << "Enter number of nodes in List 1: ";
    cin >> n1;

    cout << "\nEnter sorted values for List 1:" << endl;

    for (int i = 0; i < n1; i++) {
        list1.insertAtEnd();
    }

    cout << "\nEnter number of nodes in List 2: ";
    cin >> n2;

    cout << "\nEnter sorted values for List 2:" << endl;

    for (int i = 0; i < n2; i++) {
        list2.insertAtEnd();
    }

    cout << "\nList 1:" << endl;
    list1.display();

    cout << "\nList 2:" << endl;
    list2.display();

    list1.mergeSortedList(list2);

    cout << "\nMerged List:" << endl;
    list1.display();

    return 0;
}