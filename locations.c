#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "locations.h"

void theMine() {
    int loop = 1;

    system("cls");
    printf("|--Welcome to The Mines!--|\n");

    while (loop == 1) {
        printf("Type 'mine' to mine or '0' to exit...\n");
        printf(":> ");

        char buffer[16]; //clears new line, (enter is seen as \n)
        fgets(buffer, sizeof(buffer), stdin); //erases the previous user input so it starts fresh

        if (strcmp(buffer, "mine\n") == 0) {
            printf("minied!\n");
        }
        else if (strcmp(buffer, "0\n") == 0) {
            loop = 0;
            printf("Exiting the mine...\n");
        }
        else {
            printf("Press enter please to mine or 0 to exit.\n");
        }   
    }
}

void theUpgradeShack() {
    int choice = 0;
    int loop = 1;

    system("cls");
    printf("|--Welcome to The Upgrade Shack!--|\n");
    printf("Type the number of the upgrade you want or 0 to exit\n");

    while (loop == 1) {
        printf("1. Pickaxe upgrade\n");
        printf("2. More money\n");
        printf(":> ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input, try again.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                printf("Pickaxe upgraded...\n");
                break;
            case 2:
                printf("You now get more money!\n");
                break;
            case 0:
                printf("Exiting the shack...\n");
                loop = 0;
                break;
            default:
                printf("Invalid input, try again.\n");
        }
    }
}