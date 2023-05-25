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
    int daysInMonth;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= January && monthNumber <= December) {
        enum Month month = monthNumber;
        switch (month) {
            case January:
                printf("Month: January\n");
                daysInMonth = 31;
                break;
            case February:
                printf("Month: February\n");
                daysInMonth = 28; // Assuming it's not a leap year
                break;
            case March:
                printf("Month: March\n");
                daysInMonth = 31;
                break;
            case April:
                printf("Month: April\n");
                daysInMonth = 30;
                break;
            case May:
                printf("Month: May\n");
                daysInMonth = 31;
                break;
            case June:
                printf("Month: June\n");
                daysInMonth = 30;
                break;
            case July:
                printf("Month: July\n");
                daysInMonth = 31;
                break;
            case August:
                printf("Month: August\n");
                daysInMonth = 31;
                break;
            case September:
                printf("Month: September\n");
                daysInMonth = 30;
                break;
            case October:
                printf("Month: October\n");
                daysInMonth = 31;
                break;
            case November:
                printf("Month: November\n");
                daysInMonth = 30;
                break;
            case December:
                printf("Month: December\n");
                daysInMonth = 31;
                break;
        }
        printf("Number of days in the month: %d\n", daysInMonth);
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
