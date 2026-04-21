#include <iostream>
using namespace std;

typedef struct Student {
    int id;
    char name[50];
    int year;
    char program[50];
    Student* next;
} Student;

typedef struct ListStudent {
    Student* head;
    Student* tail;
} ListStudent;

int main() {
    ListStudent list;
    list.head = NULL;
    list.tail = NULL;

    cout << "Program runs successfully!" << endl;

    return 0;
}