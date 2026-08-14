#include <stdio.h>
#include <math.h>

int main(){

    //initialize variables
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // const means variable can't be rewritten should capitalize variable names

    //get user input
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    //calculate
    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    //print results
    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}