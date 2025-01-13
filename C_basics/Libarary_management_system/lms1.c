#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 100
#define AUTHOR_LENGTH 100

typedef struct {
    int id;
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
    int isBorrowed; // 0 if available, 1 if borrowed
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

// Function prototypes
void addBook();
void viewBooks();
void borrowBook();
void returnBook();
void saveBooks();
void loadBooks();

int main() {
    loadBooks();
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                saveBooks();
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }
    
    Book newBook;
    newBook.id = bookCount + 1; // Simple ID assignment
    printf("Enter book title: ");
    getchar(); // Clear newline character from buffer
    fgets(newBook.title, TITLE_LENGTH, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove newline character
    printf("Enter author name: ");
    fgets(newBook.author, AUTHOR_LENGTH, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove newline character
    newBook.isBorrowed = 0; // Initially available

    library[bookCount++] = newBook;
    printf("Book added successfully!\n");
}

void viewBooks() {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < bookCount; i++) {
        if (!library[i].isBorrowed) {
            printf("ID: %d | Title: %s | Author: %s\n", library[i].id, library[i].title, library[i].author);
        }
    }
}

void borrowBook() {
    int id;
    printf("Enter the ID of the book to borrow: ");
    scanf("%d", &id);

    if (id > 0 && id <= bookCount && !library[id - 1].isBorrowed) {
        library[id - 1].isBorrowed = 1;
        printf("You have borrowed the book '%s'.\n", library[id - 1].title);
    } else {
        printf("Invalid ID or the book is already borrowed.\n");
    }
}

void returnBook() {
    int id;
    printf("Enter the ID of the book to return: ");
    scanf("%d", &id);

    if (id > 0 && id <= bookCount && library[id - 1].isBorrowed) {
        library[id - 1].isBorrowed = 0;
        printf("You have returned the book '%s'.\n", library[id - 1].title);
    } else {
        printf("Invalid ID or the book was not borrowed.\n");
    }
}

void saveBooks() {
    FILE *file = fopen("books.txt", "w");
    for (int i = 0; i < bookCount; i++) {
        fprintf(file, "%d,%s,%s,%d\n", library[i].id, library[i].title, library[i].author, library[i].isBorrowed);
    }
    fclose(file);
}

void loadBooks() {
    FILE *file = fopen("books.txt", "r");
    
    if (file == NULL) return; // No previous data
    
    while (!feof(file)) {
        Book b;
        fscanf(file, "%d,%99[^,],%99[^,],%d\n", &b.id, b.title, b.author, &b.isBorrowed);
        library[bookCount++] = b;
    }
    
    fclose(file);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 100
#define AUTHOR_LENGTH 100

typedef struct {
    int id;
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
    int isBorrowed; // 0 if available, 1 if borrowed
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

// Function prototypes
void addBook();
void viewBooks();
void borrowBook();
void returnBook();
void saveBooks();
void loadBooks();

int main() {
    loadBooks();
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                saveBooks();
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }
    
    Book newBook;
    newBook.id = bookCount + 1; // Simple ID assignment
    printf("Enter book title: ");
    getchar(); // Clear newline character from buffer
    fgets(newBook.title, TITLE_LENGTH, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove newline character
    printf("Enter author name: ");
    fgets(newBook.author, AUTHOR_LENGTH, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove newline character
    newBook.isBorrowed = 0; // Initially available

    library[bookCount++] = newBook;
    printf("Book added successfully!\n");
}

void viewBooks() {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < bookCount; i++) {
        if (!library[i].isBorrowed) {
            printf("ID: %d | Title: %s | Author: %s\n", library[i].id, library[i].title, library[i].author);
        }
    }
}

void borrowBook() {
    int id;
    printf("Enter the ID of the book to borrow: ");
    scanf("%d", &id);

    if (id > 0 && id <= bookCount && !library[id - 1].isBorrowed) {
        library[id - 1].isBorrowed = 1;
        printf("You have borrowed the book '%s'.\n", library[id - 1].title);
    } else {
        printf("Invalid ID or the book is already borrowed.\n");
    }
}

void returnBook() {
    int id;
    printf("Enter the ID of the book to return: ");
    scanf("%d", &id);

    if (id > 0 && id <= bookCount && library[id - 1].isBorrowed) {
        library[id - 1].isBorrowed = 0;
        printf("You have returned the book '%s'.\n", library[id - 1].title);
    } else {
        printf("Invalid ID or the book was not borrowed.\n");
    }
}

void saveBooks() {
    FILE *file = fopen("books.txt", "w");
    for (int i = 0; i < bookCount; i++) {
        fprintf(file, "%d,%s,%s,%d\n", library[i].id, library[i].title, library[i].author, library[i].isBorrowed);
    }
    fclose(file);
}

void loadBooks() {
    FILE *file = fopen("books.txt", "r");
    
    if (file == NULL) return; // No previous data
    
    while (!feof(file)) {
        Book b;
        fscanf(file, "%d,%99[^,],%99[^,],%d\n", &b.id, b.title, b.author, &b.isBorrowed);
        library[bookCount++] = b;
    }
    
    fclose(file);
}
