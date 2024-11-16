#include <stdio.h>
#include <string.h>

#define AUTHOR_SIZE 100
#define TITLE_SIZE 100
#define MAX_BOOKS 200

int book_counter = 0;

struct book {
    int isbn;
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
    int publication_year;
    float price;
};

// Δηλώνει έναν πίνακα 200 θέσεων από structs τύπου "book"
struct book library_catalog[MAX_BOOKS];

int main() {
    char choice = 'y';
    while (choice == 'y'){
        insert();
        printf("Do you want to insert another book? (y/n): ");
        scanf("%c", &choice);   
    }
    print();
}

void insert() {
    int isbn_code;
    int flag = 0; // Χρησιμοποιούμε το flag σαν διακόπτη για να ξέρει το πρόγραμμα τι να κάνει
    printf("Enter ISBN code: ");
    scanf("%d", &isbn_code);

    while ((getchar()) != '\n');  // Καθαρισμός του input buffer για να μην έχουμε πρόβλημα με το fgets

    for (int i = 0; i < book_counter; i++) {  // Ελέγχουμε αν το ISBN υπάρχει ήδη
        if (library_catalog[i].isbn == isbn_code) {
            printf("ISBN code already exists\n");
            flag = 1;
            break;
        }
    }

    if (book_counter == MAX_BOOKS && flag != 1) { // Αν ο πίνακας είναι γεμάτος
        printf("The array is full, you can't insert any more books\n");
        flag = 1;
    }

    if (flag == 0) { // Αν δεν υπάρχει ήδη και ο πίνακας δεν είναι γεμάτος
        library_catalog[book_counter].isbn = isbn_code;

        printf("Enter title: ");
        fgets(library_catalog[book_counter].title, TITLE_SIZE, stdin);

        printf("Enter author: ");
        fgets(library_catalog[book_counter].author, AUTHOR_SIZE, stdin);

        printf("Enter publication year: ");
        scanf("%d", &library_catalog[book_counter].publication_year);
        while ((getchar()) != '\n'); // Καθαρισμός του input buffer

        printf("Enter price: ");
        scanf("%f", &library_catalog[book_counter].price);
        while ((getchar()) != '\n'); // Καθαρισμός του input buffer

        book_counter++;
        printf("Book inserted successfully\n");
    }
}

void print(){
    printf("Here is a list of all movies:\n\n");
    for (int i = 0; i < book_counter; i++) {   //edw basw n-1 giati to index jekina apo 0 kai oxi 1
        printf("Code: %d\n\n", library_catalog[i].isbn);
        printf("Title: %s\n", library_catalog[i].title);
        printf("Author: %s\n", library_catalog[i].author);
        printf("Year: %d\n", library_catalog[i].publication_year);
        printf("Price: %.2f\n", library_catalog[i].price);
    }
}

