# 📚 Library Management System (C++)

A simple **console-based Library Management System** written in C++, using `unordered_map` to manage books by unique Book IDs.

---

## 🚀 Features

- Add a new book by ID, title, author, and year
- Delete a book by ID
- Search for a book by ID
- Display all books in the library
- Menu-driven interface

---

## 🛠 Tech Stack

- Language: C++
- Data Structure: `unordered_map` from STL
- Platform: Console

---

## 📄 Description

Each book is represented by the following fields:

- **ID**: Unique integer identifier for the book
- **Title**: Name of the book
- **Author**: Author's name
- **Year**: Year of publication

Books are stored in an `unordered_map<int, Book>` for fast retrieval and deletion by ID.

---

## 🧪 Sample Usage

```
--- Library Menu ---
1. Add Book
2. Delete Book
3. Search Book
4. Display All Books
5. Exit
Enter your choice: 1
Enter Book ID: 101
Enter Title: The Alchemist
Enter Author: Paulo Coelho
Enter Year: 1988
Book added successfully.
```
## 💻 How to Run

### Using g++ (Linux/macOS/WSL):
```bash
g++ -o library library.cpp
./library
```
### Using g++ (Windows CMD):
```
g++ -o library.exe library.cpp
library.exe
```
Or use an IDE like CodeBlocks, Dev-C++, or VS Code with C++ extension.
