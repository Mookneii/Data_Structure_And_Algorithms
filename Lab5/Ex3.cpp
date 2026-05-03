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
int main(){
    List* list = createEmptyList();
    Product p1 = {1, "Phone", 500.50};
    Product p2 = {2, "Laptop", 899.9};

    addProductToBegin(list, p1);
    addProductToEnd(list, p2);
    display(list);

}