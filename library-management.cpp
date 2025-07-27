#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

unordered_map<int, Book> library;

void addBook(int id, string title, string author, int year) {
    library[id] = {title, author, year};
    cout << "Book added successfully.\n";
}

void deleteBook(int id) {
    if (library.find(id) != library.end()) {
        library.erase(id);
        cout << "Book deleted successfully.\n";
    } else {
        cout << "Book ID not found.\n";
    }
}

void searchBook(int id) {
    if (library.find(id) != library.end()) {
        Book b = library[id];
        cout << "Book Found:\nTitle: " << b.title << "\nAuthor: " << b.author << "\nYear: " << b.year << "\n";
    } else {
        cout << "Book ID not found.\n";
    }
}

void displayBooks() {
    if (library.empty()) {
        cout << "Library is empty.\n";
        return;
    }
    cout << "All Books in the Library:\n";
    for (auto &entry : library) {
        cout << "ID: " << entry.first
             << " | Title: " << entry.second.title
             << " | Author: " << entry.second.author
             << " | Year: " << entry.second.year << "\n";
    }
}

int main() {
    int choice, id, year;
    string title, author;

    while (true) {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n2. Delete Book\n3. Search Book\n4. Display All Books\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: "; cin >> id;
                cin.ignore();
                cout << "Enter Title: "; getline(cin, title);
                cout << "Enter Author: "; getline(cin, author);
                cout << "Enter Year: "; cin >> year;
                addBook(id, title, author, year);
                break;
            case 2:
                cout << "Enter Book ID to delete: "; cin >> id;
                deleteBook(id);
                break;
            case 3:
                cout << "Enter Book ID to search: "; cin >> id;
                searchBook(id);
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
