#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 10

void printLine(char ch, int len) {
    for (int i = 0; i < len; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    char *items[MAX_ITEMS] = {
        "Venue Rental",
        "Catering",
        "Decoration",
        "Photography",
        "Cake",
        "Entertainment",
        "Invitations",
        "Gifts",
        "Transport",
        "Miscellaneous"
    };
    
    float costs[MAX_ITEMS] = {0};
    float total = 0.0;
    int count;

    printf("\n** Wedding Anniversary Expenses Tracker **\n\n");
    printLine('-', 40);
    
    printf("Enter the number of expense categories (max %d): ", MAX_ITEMS);
    scanf("%d", &count);
    
    if (count < 1 || count > MAX_ITEMS) {
        printf("Please enter a valid number of items (1 to %d).\n", MAX_ITEMS);
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter the cost for %s: Rs", items[i]);
        scanf("%f", &costs[i]);
        total += costs[i];
    }

    printLine('=', 40);
    printf("\n--- Wedding Anniversary Bill ---\n");
    printLine('-', 40);

    for (int i = 0; i < count; i++) {
        printf("%-20s : Rs%.2f\n", items[i], costs[i]);
    }

    printLine('-', 40);
    printf("Total Amount Due       : Rs%.2f\n", total);
    printLine('=', 40);
    
    printf("\nThank you for using the Wedding Anniversary Expenses Tracker!\n");
    return 0;
}