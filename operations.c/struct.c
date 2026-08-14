#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student; // all students that are created have a variable of name. typedef struct can move datatype name to the end

void printStudent(Student student);

int main(){

    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    Student student4 = {0}; // resets the memory of a program when using structs

    strcpy(student4.name, "Sandy"); //stringcopy function
    student4.age = 27;
    student4.gpa = 4.00;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

void printStudent(Student student){
    printf("%s\n", student.name); // the . is the access operator
    printf("%d\n", student.age); // the . is the access operator
    printf("%.3f\n", student.gpa); // the . is the access operator
    printf("%s\n", (student.isFullTime) ? "yes" : "no"); // the . is the access operator
    printf("\n");
} // Student is the data type

// structs are similar to objects
// C's version of object oriented programming