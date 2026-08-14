#include <stdio.h>
#include <string.h>

int main(){

    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; //prevents fgets from reading enter in the input
    
    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity); // address of operator is most commonly

    total = price * quantity;

    printf("You have bought %d %s\n", quantity, item);
    printf("%c%0.2f", currency, total); //You can list multiple format specifiers in the same line

    return 0;
}