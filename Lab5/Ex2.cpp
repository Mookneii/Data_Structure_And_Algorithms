#include<iostream>
using namespace std;
struct Element {
    string data;
    Element* next;
};
struct List{
    int n;
    Element* head;
    Element* tail ;
};
List* createEmptyList(){
    List* ls = new List;
    ls->n = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}
void add_beg(List* ls, string data){
    Element* e = new Element;
    e->data = data;
    e->next = ls->head;
    ls->head = e;
    if(ls->n ==0){
        ls->tail = e;
    }
    ls->n++;
}
void add_end(List* ls,string data){
    Element* e = new Element;
    e->data = data;
    e->next = nullptr;
    if(ls->n == 0){
        ls->head = e;
    }
    else{
        ls->tail->next = e;
    }
    ls->tail =e;
    ls->n++;
}
void display(List* ls){
    Element* t = ls->head;
    while(t !=nullptr){
        cout<< t->data << " ";
        t = t->next;
    }
    

}
int main(){
    List* list = createEmptyList();
    add_beg(list,"Dom");
    add_beg(list,"Rotana");
    add_beg(list,"Menghong");
    add_beg(list,"Rith");
    add_end(list,"Mony");
    add_end(list,"Phy");
    add_end(list,"Bob");
    add_end(list,"Moon");
    add_end(list,"Kal");
    add_end(list,"Keil");
    cout<<"Name List: "<<endl;
    display(list);


    
    return 0;
}