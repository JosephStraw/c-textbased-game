#include <stdio.h>
#include "welcome.h"

void welcomeMessage() {
    printf("|---------------------|\n");
    printf("| Welcome to Flopsie! |\n");
    printf("|The floppy disk game!|\n");
    printf("|---------------------|\n");

    printf("\nPress any key to continue...\n");
    getchar();

}

void menuDisplay() {
    printf("Where would you like to go?\n");
    printf("1. The mine\n");
    printf("2. The upgrade shack\n");
    printf("3. Exit\n");

    printf("\n:> ");
    //scanf();
}

int menuChoice() {
    int choice = 0;
    while(1) {
        if (scanf("%d", &choice) != 1) {
            printf("Invalid, please try again.\n");
            while(getchar() != '\n');
            continue;
        }
    
    while(getchar() != '\n');
        if(choice < 1 || choice > 3) {
            printf("Invalid, please try again.\n");
            continue;
        }
        break;
    }
    return choice;
}