
void erase(){
    int isbn_e;
    int flag = 0;
    printf("Give me the ISBN code of the book you want to delete: ");
    scanf("%d", &isbn_e);
    for (int i = 0; i < book_counter; i++) {  //edw basw n-1 giati to index jekina apo 0 kai oxi 1
        if (library_catalog[i].isbn == isbn_e) {
            library_catalog[i] = library_catalog[book_counter-1];
            book_counter--;
            printf("Book deleted\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Cannot find the book, please enter the correct number next time!!\n");
    }
}