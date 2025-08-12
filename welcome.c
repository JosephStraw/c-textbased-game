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
    printf("2. The uprgrade shack\n");

    printf("\n:> ");
    //scanf();
}

int menuChoice() {
    int choice = 0;
    scanf("%d", &choice);
    while(getchar() != '\n');
        if(choice < 1 || choice > 2) {
            printf("Invalid, please try again.\n");
        }
    
    return choice;
}