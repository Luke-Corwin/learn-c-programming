#include <stdio.h>
#include <string.h> //helper header file

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade ='\0'; // \0 is a null terminator in C
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age); //& is the address of operator

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // space infront of %c tells C to skip over new line character

    getchar(); // also prevents the newline buffer
    printf("Enter your full name: ");
    // scanf("%s", &name);  scanf cant read any white space so when it sees space it stops reading you need to use fgets
    fgets(name, sizeof(name), stdin); //fgets means file get then stdin means standard input
    name[strlen(name) - 1] = '\0'; //prevents fgets from reading the enter key when inputting data

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}