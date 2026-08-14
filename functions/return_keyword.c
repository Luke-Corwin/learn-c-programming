#include <stdio.h>

int getMax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}


int main(){

    int max = getMax(4,3);

    printf("%d", max);

    return 0;
}

// a return type precedes the name of the function ex: int before main
// You're replacing the square (2) with 4 for example
// returning 0 at the end is an exit code if you do not return 0 at the end that means you have an error in your code