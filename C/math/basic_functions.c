#include <stdio.h>
#include <math.h> // A header file needed for math

int main(){

    float x = 45;

    x = sqrt(x);
    x = pow(x, 2); //base raised to a given power
    x = round(x);
    x = ceil(x);
    x = floor(x);
    x = abs(x);
    x = log(x);
    x = sin(x);
    x = cos(x);
    x = tan(x);

    printf("%f", x);

    return 0;
}