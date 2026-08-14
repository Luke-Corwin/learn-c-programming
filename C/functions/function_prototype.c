#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){

    hello("Spongebob", 30);

    if(ageCheck){
        printf("You are old enough to work at the krusty krab");
    }
    else{
        ("You must be 16 years old to work at the krusty krab");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    if (age >= 16){
        return true;
    }
    else{
        return false;
    }
}

// C programming complies the code and reads top to bottom