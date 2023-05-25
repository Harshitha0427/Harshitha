#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    double price;
    float rating;
};

int main() {
    int i, n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("Enter details for Book %d:\n", i+1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Price: ");
        scanf("%lf", &books[i].price);
        printf("Rating: ");
        scanf("%f", &books[i].rating);
        printf("\n");
    }

    struct Book highestRatedBook = books[0];
    struct Book lowestPricedBook = books[0];

    for (i = 1; i < n; i++) {
        if (books[i].rating > highestRatedBook.rating) {
            highestRatedBook = books[i];
        }

        if (books[i].price < lowestPricedBook.price) {
            lowestPricedBook = books[i];
        }
    }

    printf("Book with the highest rating:\n");
    printf("Title: %s\n", highestRatedBook.title);
    printf("Author: %s\n", highestRatedBook.author);
    printf("Price: %.2lf\n", highestRatedBook.price);
    printf("Rating: %.2f\n\n", highestRatedBook.rating);

    printf("Book with the lowest price:\n");
    printf("Title: %s\n", lowestPricedBook.title);
    printf("Author: %s\n", lowestPricedBook.author);
    printf("Price: %.2lf\n", lowestPricedBook.price);
    printf("Rating: %.2f\n", lowestPricedBook.rating);

    return 0;
}
