#include <iostream>
using namespace std;

// Structure
struct Student {
    int id;
    string name;
    int year;
    string program;
    Student* next;
};

struct ListStudent {
    Student* head;
    Student* tail;
};

// Create empty list
ListStudent createEmptyList() {
    ListStudent ls;
    ls.head = NULL;
    ls.tail = NULL;
    return ls;
}

// Add student
void add(Student s, ListStudent &ls) {
    Student* newNode = new Student;
    *newNode = s;
    newNode->next = NULL;

    if (ls.head == NULL) {
        ls.head = newNode;
        ls.tail = newNode;
    } else {
        ls.tail->next = newNode;
        ls.tail = newNode;
    }
}

int main() {
    ListStudent ls = createEmptyList();

    // Add 5 students
    Student s1 = {1, "Alice", 1, "IT", NULL};
    Student s2 = {2, "Bob", 2, "CS", NULL};
    Student s3 = {3, "Charlie", 1, "SE", NULL};
    Student s4 = {4, "David", 3, "IT", NULL};
    Student s5 = {5, "Eva", 2, "CS", NULL};

    add(s1, ls);
    add(s2, ls);
    add(s3, ls);
    add(s4, ls);
    add(s5, ls);

    return 0;
}