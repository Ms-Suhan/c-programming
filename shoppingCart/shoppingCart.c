#include <stdio.h>
#include <string.h>

int main(){
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 10.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter the item: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price of each?: ");
    scanf("%f",&price);

    printf("Enter your quantity: ");
    scanf("%d",&quantity);

    total = price * quantity;
    printf("\nyou have bought %d %s/s\n", quantity, item);
    printf("%c%.2f\n",currency, total);
    return 0;
}