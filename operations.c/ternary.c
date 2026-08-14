#include <stdio.h>
#include <stdbool.h>

int main(){

    int hours = 12;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}

// ternary operator ? = short-hard for if-else statements
/* int x = 7;
    int y = 6;
    int max = (x > y) ? x : y; //read like if x > y output x otherwise y

    printf("%d", max);
    
    
    bool isOnline = true;

    printf("%s", (isOnline) ? "online" : "offline");

    int number = 8;

    printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");

    int age = 21;

    printf("%s", (age > 18) ? "adult" : "child");
    */
