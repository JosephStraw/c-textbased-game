#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "locations.h"

int Loop = 1;
void theMine() {    
    system("cls");
    printf("|--Welcome to the Mines!--|\n");

    while (Loop == 1) {
        printf("Type 'mine' to mine or '0' to exit...\n");
        printf(":> ");

        char buffer[16]; //clears new line, (enter is seen as \n)
        fgets(buffer, sizeof(buffer), stdin); //erases the previous user input so it starts fresh

        if (strcmp(buffer, "mine\n") == 0) {
            printf("minied!\n");
        }
        else if (strcmp(buffer, "0\n") == 0) {
            Loop = 0;
            printf("Exiting the mine...\n");
        }
        else {
            printf("Press enter please to mine or 0 to exit.\n");
        }   
    }
}

void theUpgradeShack() {

}