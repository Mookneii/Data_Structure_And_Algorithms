#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookID;
    string bookISBN;
    string bookTitle;
    int publishedYear;
    string authorName[5];
    int authorCount;
    double price;
};

void displayBookByISBN(Book books[], int size, string isbn) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (books[i].bookISBN == isbn) {
            cout << "=================================================\n";
            cout << "Book ID: " << books[i].bookID << endl;
            cout << "Book ISBN: " << books[i].bookISBN << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Published Year: " << books[i].publishedYear << endl;
            cout << "Author Name: ";
            for (int j = 0; j < books[i].authorCount; j++) {
                cout << books[i].authorName[j] << " ";
            }
            cout << "\nBook Price: " << books[i].price << " $" << endl;
            cout << "=================================================\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Book not found.\n";
    }
}

void displayAllBooks(Book books[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "=================================================\n";
        cout << "Book ID: " << books[i].bookID << endl;
        cout << "Book ISBN: " << books[i].bookISBN << endl;
        cout << "Book Title: " << books[i].bookTitle << endl;
        cout << "Published Year: " << books[i].publishedYear << endl;
        cout << "Author Name: ";
        for (int j = 0; j < books[i].authorCount; j++) {
            cout << books[i].authorName[j] << " ";
        }
        cout << "\nBook Price: " << books[i].price << " $" << endl;
        cout << "=================================================\n";
    }
}

int main() {
    Book books[2];

    for (int i = 0; i < 2; i++) {
        cout << "\nEnter information for Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> books[i].bookID;

        cout << "Book Title: ";
        cin >> books[i].bookTitle;

        cout << "Published Year: ";
        cin >> books[i].publishedYear;

        cout << "Book ISBN: ";
        cin >> books[i].bookISBN;

        cout << "Number of authors: ";
        cin >> books[i].authorCount;

        cout << "Author names:\n";
        for (int j = 0; j < books[i].authorCount; j++) {
            cin >> books[i].authorName[j];
        }

        cout << "Book Price: ";
        cin >> books[i].price;
    }

    cout << "\nDisplay all books:\n";
    displayAllBooks(books, 2);

    string search;
    cout << "\nSearch ISBN for book: ";
    cin >> search;
    displayBookByISBN(books, 2, search);

    return 0;
}