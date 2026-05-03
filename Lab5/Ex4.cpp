#include <iostream>
using namespace std;
struct Product{
    int productId;
    string name;
    double price;
    
};
struct Element{
    Product data;
    Element* next;
};
struct List{
    int n;
    Element* head;
    Element* tail;
};
List* createEmptyList(){
    List* ls = new List;
    ls->n =0;
    ls-> head = nullptr;
    ls->tail = nullptr;
    return ls;
}
void addProductToBegin(List* ls, Product data){
    Element* e = new Element;
    e->data = data;
    e->next = ls->head;
    ls->head = e;
    if(ls->n ==0){
        ls->tail = e;
    }
    ls->n++;
}
void addProductToEnd(List* ls, Product data){
    Element* e = new Element;
    e->data = data;
    e->next = nullptr;
    if(ls->n==0){
        ls->head = e;
    }
    else{
        ls->tail->next = e;
    }
    ls->tail = e;
    ls->n++;
}
void display(List* ls){
    Element* temp = ls->head;
    while (temp !=nullptr)
    {
        cout << "ID: " << temp->data.productId
             << ", Name: " << temp->data.name
             << ", Price: " << temp->data.price<<" $" << endl;

        temp = temp->next;
    }
    
    
}
void searchByName(List* ls, string name) {
    Element* temp = ls->head;
    bool found = false;

    while (temp != nullptr) {
        if (temp->data.name == name) {
            cout << "Found: "
                 << temp->data.productId << ", "
                 << temp->data.name << ", "
                 << temp->data.price << endl;
            found = true;
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Product not found!" << endl;
    }
}
void searchByPrice(List* ls, double p) {
    Element* temp = ls->head;

    cout << "\n--- Products with price LOWER than " << p << " ---\n";
    while (temp != nullptr) {
        if (temp->data.price < p) {
            cout << temp->data.productId << ", "
                 << temp->data.name << ", "
                 << temp->data.price << endl;
        }
        temp = temp->next;
    }

    temp = ls->head; // reset

    cout << "\n--- Products with price GREATER than " << p << " ---\n";
    while (temp != nullptr) {
        if (temp->data.price > p) {
            cout << temp->data.productId << ", "
                 << temp->data.name << ", "
                 << temp->data.price << endl;
        }
        temp = temp->next;
    }
}
void updateByProductId(List* ls, int id) {
    Element* temp = ls->head;

    while (temp != nullptr) {
        if (temp->data.productId == id) {
            cout << "Enter new name: ";
            cin >> temp->data.name;

            cout << "Enter new price: ";
            cin >> temp->data.price;

            cout << "Product updated successfully!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Product not found!\n";
}
int main() {
    List* list = createEmptyList();

    Product p1 = {1, "Phone", 12.2};
    Product p2 = {2, "Laptop", 899.9};
    Product p3 = {3, "Tablet", 300};

    addProductToBegin(list, p1);
    addProductToEnd(list, p2);
    addProductToEnd(list, p3);

    display(list);

    cout << "\nSearch by name:\n";
    searchByName(list, "Laptop");

    cout << "\nSearch by price:\n";
    searchByPrice(list, 500);

    cout << "\nUpdate product:\n";
    updateByProductId(list, 1);

    cout << "\nAfter update:\n";
    display(list);

    return 0;
}