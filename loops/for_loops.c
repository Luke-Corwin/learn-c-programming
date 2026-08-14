#include <stdio.h>
#include <windows.h> //includes a sleep function for windows

int main(){

    for(int i = 10; i >= 0; i--){
        Sleep(1000); // a function from the windows header file*
        printf("%d\n", i);
    }
    printf("Happy New Year");

    return 0;
}

// syntax: for(Initialization; Condition; Update)