#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true; // 20% discount

    //student = $9
    //senior = $8
    //student + senior = $7

    if(isStudent){
            if(isSenior){
                printf("You get a student discount of 10%\n");
                printf("You get a student discount of 20%\n");
             price *= 0.7; //same thing and 10% off is 90%
        }
        else {
            printf("You get a student discount of 10%\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a student discount of 20%\n");
            price *= 0.8; //same thing and 10% off is 90%
        }
    }

    printf("The price of a ticket is: $%.2f", price);

    return 0;
}