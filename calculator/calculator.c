#include <stdio.h>

int main(){
    int operation;
    printf("Choose the operation you want to perform: \n");
    printf("Addition + \t: 1\n");
    printf("subtraction - \t: 2\n");
    printf("Division / \t: 3\n");
    printf("Multiply x \t: 4\n");
    printf("Remainder  \t: 5\n");
    scanf("%d",&operation);

    float num1,num2;

    printf("Enter first number: \n");
    scanf("%f",&num1);

    printf("Enter second number: \n");
    scanf("%f",&num2);

    switch(operation){
        case 1:
            printf("%.2f\n",num1 + num2);
            break;
        case 2:
            printf("%.2f\n",num1 - num2);
            break;
        case 3:
            printf("%.2f\n",num1 / num2);
            break;
        case 4:
            printf("%.2f\n",num1 * num2);
            break;
    }


}