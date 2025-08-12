#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "welcome.h"
#include "locations.h"

int main() {
    system("cls");
    bool gameLoop = true;
        welcomeMessage();

        int choice;

    while(gameLoop == true) {
        menuDisplay();
        choice = menuChoice();

        switch(choice) {
            case 1:
                theMine();
                break;
            case 2:
                theUpgradeShack();
                break;
            case 3:
                return 0;
        }
    }
    return 0;
}