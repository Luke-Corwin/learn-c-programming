#include <stdio.h>

int main(){

    //initalize variables
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    //terminal instructions
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    //choices for the user
    if(choice==1){
        printf("Enter your weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice==2){
        printf("Enter your weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalid choice please enter 1 or 2\n"); //example of edge case??
    }
    
    return 0;
}