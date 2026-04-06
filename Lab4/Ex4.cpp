void display(ListStudent ls) {
    Student* temp = ls.head;

    while (temp != NULL) {
        cout << "ID: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Year: " << temp->year << endl;
        cout << "Program: " << temp->program << endl;
        cout << "-------------------" << endl;

        temp = temp->next;
    }
}