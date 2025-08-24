#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int choice;

int getuserchoice();
int getcomputerchoice();

int main(){
    printf("*** Rock Paper Sissors ***\n");
    int computer = getcomputerchoice();
    int user = getuserchoice();

    switch(user){
        case 1:
            printf("You chose Rock!!\n");
            break;
        case 2:
            printf("You chose Paper!!\n");
            break;
        case 3:
            printf("You chose Sissors!!\n");
            break;
    }

    switch(computer){
        case 1:
            printf("Computer chose Rock!!\n");
            break;
        case 2:
            printf("Computer chose Paper!!\n");
            break;
        case 3:
            printf("Computer chose Sissors!!\n");
            break;
    }
    if(user == computer){
        printf("It is Tie!!!\n");
    }
    else if(user == 1 && computer == 3){
        printf("You Win!!!\n");
    }else if(user == 2 && computer == 1 ){
        printf("You Win!!!\n");
    }else if(user == 3 && computer == 2 ){
        printf("You Win!!!\n");
    }else{
        printf("You Lose!!!\n");
    }
    

    
}
// 1 = rock
// 2 = paper
// 3 = sissor


int getuserchoice(){
    do{
        printf("Choose an option\n");
        printf("1 ROCK \n2 PAPER \n3 SISSORS\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
    }while(choice < 1 || choice > 3);

    return choice;
}

int getcomputerchoice(){
    srand(time(0));
    int randno = (rand() % 3) + 1;
    return randno;
}
