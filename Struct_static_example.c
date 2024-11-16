#include <stdio.h>

#define AUTHOR_SIZE 100
#define TITLE_SIZE 100

struct book {
    int isbn;           // International Standard Book Number
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
    int publication_year;
    float price;
};

int main() {
    // Initialize an array of books with real-world values
    struct book library_catalog[3] = {
        {9780131103627, "The C Programming Language", "Brian W. Kernighan and Dennis M. Ritchie", 1988, 65.99},
        {9780262033848, "Introduction to Algorithms", "Thomas H. Cormen et al.", 2009, 89.75},
        {9780132350884, "Clean Code", "Robert C. Martin", 2008, 49.99}
    };

    // Display the books
    for (int i = 0; i < 3; i++) {
        printf("ISBN: %d\n", library_catalog[i].isbn);
        printf("Title: %s\n", library_catalog[i].title);
        printf("Author: %s\n", library_catalog[i].author);
        printf("Publication Year: %d\n", library_catalog[i].publication_year);
        printf("Price: $%.2f\n", library_catalog[i].price);
        printf("---------------------------\n");
    }

    return 0;
}