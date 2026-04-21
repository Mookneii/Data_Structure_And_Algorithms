#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// List structure
struct List {
    Node* head;
    Node* tail;
};

// Create empty list
List createList() {
    List l;
    l.head = NULL;
    l.tail = NULL;
    return l;
}

// Add number to list
void add(int value, List &l) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (l.head == NULL) {
        l.head = l.tail = newNode;
    } else {
        l.tail->next = newNode;
        l.tail = newNode;
    }
}

// Display list
void display(List l) {
    Node* temp = l.head;
    cout << "All data in the list are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Sum of list
int sumList(List l) {
    Node* temp = l.head;
    int sum = 0;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int main() {
    List l = createList();
    int num;
    int zeroCount = 0;

    cout << "*** A program to store number as many as possible ***" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        if (num == 0) {
            zeroCount++;

            if (zeroCount == 1) {
                cout << "You have entered 0 once. Only 1 more left." << endl;
                continue;
            } else {
                cout << "You have entered 0 twice. The program will stop." << endl;
                break;
            }
        }

        add(num, l);
    }

    display(l);
    cout << "Summation of all numbers is: " << sumList(l) << endl;

    return 0;
}