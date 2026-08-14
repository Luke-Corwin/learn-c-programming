#include <stdio.h>

void birthday(int *age);

int main(){

    int age = 25; // variable age has a memory address
    int *pAge = &age;

    birthday(pAge);

    printf("You are %d years old", age);

    return 0;
}

void birthday(int *age){
    //pass by value when you pass a value you are making a copy not changing the original
    // need to pass by refrence (pointer)
    (*age)++; // need to use dereference operator *
}

/* pointer is a variable that stores the memory adress of another variable
they avoid wasting memory by passing 
address of large data structure instead of copying all the data */

//printf("%p", &age); returns the memory adress of age variable. Pointer stores the adress as a value in a seperate variable
    

/*printf("%p\n", &age);
printf("%p\n", pAge); */

// think of * as a star shaped key. It will unlock a memory address and return the value to you