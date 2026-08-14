#include <stdio.h>

int main(){

    // if statement = do some code if a condition is true if its not then code doesn't execute

    int age = 0; //initalize the variable age

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are an adult");
    }
    else if(age < 0){
        printf("You haven't been born yet");
    }
    else if(age == 0){
        printf("You have been born");
    } // two equals sign means direct comparison
    else{
        printf("You are a child");
    } // conditions are read from top down - IMPORTANT

    return 0;
}