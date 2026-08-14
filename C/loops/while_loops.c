#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = No): ");
        scanf(" %c", &response);
        
        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }
    printf("you exited the game");

    return 0;
}

// can prompt user to enter something valid
// want to avoid infinite loops
// only enter the loop if a condition is true
// can also say do and have while at the end to check condition