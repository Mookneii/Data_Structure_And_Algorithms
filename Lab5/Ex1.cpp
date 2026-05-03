#include <iostream>
using namespace std;


struct Node {
    char data;
    Node* next;
};


struct LinkedList {
    Node* head;
    Node* tail;
    int n;
};


LinkedList* creatList() {
    LinkedList* list = new LinkedList;
    list->head = NULL;
    list->tail = nullptr;
    list->n =0;
    return list;
}


void addLetter(LinkedList* list, char data) {
   Node* newNode = new Node;
   newNode->data = data;
   newNode->next = list->head;
   list->head = newNode;
   if( list->n ==0){
    list->tail = newNode;
   }
   list->n++;

}


void display(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    LinkedList* small = creatList();
    LinkedList* capital = creatList(); 

    // Add small letters a–z
    for (char c = 'a'; c <= 'z'; c++) {
        addLetter(small, c);
    }

    // Add capital letters A–Z
    for (char c = 'A'; c <= 'Z'; c++) {
        addLetter(capital, c);
    }

    cout << "Small letters:\n";
    display(small);

    cout << "Capital letters:\n";
    display(capital);

    return 0;
}