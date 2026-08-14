#include <stdio.h>

typedef int Number;
typedef char String[50];

int main(){

    String name = "Lebron James";

    printf("%s", name);

    return 0;
}

// syntax: typedef existing_type new_name;
// typedef lets you rename datatypes ex: int -> number