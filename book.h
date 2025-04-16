// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book() {}

    Book(string t, string a, string i, bool avail = true) {
        title = t;
        author = a;
        isbn = i;
        available = avail;
    }

    virtual void setBookDetails(string t, string a, string i, bool avail = true) {
        title = t;
        author = a;
        isbn = i;
        available = avail;
    }

    virtual void displayBookDetails() const {
        cout << "\nTitle: " << title
             << "\nAuthor: " << author
             << "\nISBN: " << isbn
             << "\nAvailability: " << (available ? "Available" : "Borrowed") << endl;
    }

    string getISBN() const {
        return isbn;
    }

    bool isAvailable() const {
        return available;
    }

    void borrowBook() {
        if (available) {
            available = false;
            cout << "You have successfully borrowed \"" << title << "\"." << endl;
        } else {
            cout << "Sorry, \"" << title << "\" is already borrowed." << endl;
        }
    }

    void returnBook() {
        available

