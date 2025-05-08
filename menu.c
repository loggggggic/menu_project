#include <stdio.h>

void display_menu() {
    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Exit\n");
}

int main() {
    int choice;
    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("You chose Option 1\n");
        } else if (choice == 2) {
            printf("You chose Option 2\n");
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
};
