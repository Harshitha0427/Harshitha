#include <stdio.h>

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    int monthNumber;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= January && monthNumber <= December) {
        enum Month month = monthNumber;
        switch (month) {
            case January:
                printf("Month: January\n");
                break;
            case February:
                printf("Month: February\n");
                break;
            case March:
                printf("Month: March\n");
                break;
            case April:
                printf("Month: April\n");
                break;
            case May:
                printf("Month: May\n");
                break;
            case June:
                printf("Month: June\n");
                break;
            case July:
                printf("Month: July\n");
                break;
            case August:
                printf("Month: August\n");
                break;
            case September:
                printf("Month: September\n");
                break;
            case October:
                printf("Month: October\n");
                break;
            case November:
                printf("Month: November\n");
                break;
            case December:
                printf("Month: December\n");
                break;
        }
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
