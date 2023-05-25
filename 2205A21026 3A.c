#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    double price;
    float rating;
};

int main() {
    int numBooks,i;

    printf("Enter the number of books: ");
    scanf("%d", &numBooks);

    // Declare an array of books
    struct Book books[numBooks];

    // Input details of books
    for (i = 0; i < numBooks; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%lf", &books[i].price);
        printf("Rating: ");
        scanf("%f", &books[i].rating);
    }

    // Display details of books
    printf("\nDetails of all books:\n");
    for (i = 0; i < numBooks; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2lf\n", books[i].price);
        printf("Rating: %.1f\n", books[i].rating);
    }

    return 0;
}
