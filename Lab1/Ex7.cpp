#include <iostream>
#include <string>
using namespace std;
struct Book {
    int bookID;
    string bookISBN;
    string bookTitles;
    string pulishedYear;
    string authorName[5];
    int authorCount;
    double price[];
    void displayBookByISBN(Book books[], int size, string isbn){
        for(int i=0; i<size; i++){
            if(books[i].bookISBN == isbn){
                cout<<"=================================================\n";
                cout<<"Book's ID: "<<books[i].bookID<<endl;
                cout<<"Book's ISBN: "<<books[i].bookISBN<<endl;
                cout<<"Book's Pulished year: "<<books[i].pulishedYear<<endl;
                cout<<"Book's author Name : ";
                for(int j=0; j<books[i].authorCount; i++){
                    cout<<books[j].authorName[j]<<" ";
                }
                cout<<"\nBook's price: "<<books[i].price[i]<<endl;
                cout<<"=================================================\n";
            }
        }
    }
    void displayAllBooks(Book books[], int size){
        for(int i =0 ; i< size; i++){
            cout<<"=================================================\n";
            cout<<"Book's ID: "<<books[i].bookID<<endl;
                cout<<"Book's ISBN: "<<books[i].bookISBN<<endl;
                cout<<"Book's Pulished year: "<<books[i].pulishedYear<<endl;
                cout<<"Book's author Name : ";
                for(int j=0; j<books[i].authorCount; i++){
                    cout<<books[j].authorName[j]<<" ";
                }
                cout<<"\nBook's price: "<<books[i].price[i]<<" $"<<endl;
                cout<<"=================================================\n";
        }
    }

};

int main(){
    Book books[2];
    for(int i=0 ; i<2; i++){
        cout<<"Book's ID: ";cin>>books[i].bookID;
        cout<<"Book's title: ";cin>>books[i].bookTitles;
        cout<<"Book's published year: ";cin>>books[i].pulishedYear;
        cout<<"Book's ISBN: ";cin>>books[i].bookISBN;
        cout<<"Book's number of author: ";cin>>books[i].authorCount;
        cout<<"Book's author: \n"; 
        for(int j=0 ; j<books[i].authorCount;j++){
            cin>>books[i].authorName[j];
        }
        cout<<"Book's price: ";cin>>books[i].price[i];
    }
    cout<<"Display all books: \n";
    books->displayAllBooks(books,2);
    string search;
    cout<<"Search ISBN for book: ";cin>>search;
    books->displayBookByISBN(books,2,search);
    return 0;
}