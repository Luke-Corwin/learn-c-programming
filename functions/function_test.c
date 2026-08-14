#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\nHappy Birthday to You!");
    printf("\nHappy Birthday to You!");
    printf("\nHappy Birthday dear %s", name);
    printf("\nHappy Birthday to You!");
    printf("\nYou are %d years old!\n", age);
}

int main(){

    char name[50] = "";

    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // null terminator has to have 4 letters

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age); //need parenthesis to call functions
    
    return 0;
}

// notes
// functions can't see inside other functions
// need to pass variables as arguments to make the function see them and you need a matching set of parameters*
// arguements in function need to match parameters exactly like an actual arguement over the phone