#include <stdio.h>

int balance = 250;
int option = 57;
int amt;

int getBalance(){
    return balance;
}

int addAmount(int amount){
    balance += amount;
}

int removeAmount(int amount){
    balance -= amount;
}

int main(){
    printf("*** Banking System ***\n");
    do{
        printf("Choose the service!!!\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your option\n");
        scanf("%d",&option);

        switch(option){
            case 1: 
                printf("Your current balance is %d $\n",balance);
                break;
            case 2:
                 
                printf("Enter the amount: ");
                scanf("%d",&amt);
                removeAmount(amt);
                printf("\nAmount withdrawn sucessfully!!1\n");
                break;
            case 3:
                
                printf("Enter the amount: ");
                scanf("%d",&amt);
                addAmount(amt);
                printf("\nAmount added sucessfully!!1\n");
                break;
            case 4:
                break;
        }
    }while(option != 4);

    return 0;
}

