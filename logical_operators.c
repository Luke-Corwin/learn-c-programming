#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool isSunny = false;

    if(!isSunny){
        printf("It is Cloudy outside");
    }
    else{
        printf("It is Sunny outside");
    } //not logical operator is ! put before condition and you get opposite like usual

    return 0;
}