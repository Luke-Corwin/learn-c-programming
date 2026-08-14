#include <stdio.h>

// if a variable was here it would be global scope (difficult to debug, stick to local scope when possible)

int add(int x, int y){
    int result = x + y;
    return result;
}

int main(){

    int result = add(3, 4);

    printf("%d", result);
    
    return 0;
}

// variables can only share the same name if they are in different "scopes" {} (curly brackets)
// parameters are like calling neighbor (other functions) to tell them about variables
// global scope is defining any variables outside of functions