#include <stdio.h>

int main(){

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %.1f\n", gpa); // format specifier uses f for floating
    printf("The price is %.2f\n", price);
    printf("The temperature is %f\n", temperature);

    return 0;
}