#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int min = 1;
    int max = 100;
    srand(time(NULL));
    int randomNo = (rand() % (max - min + 1) + min);

    int guess = '\0';
    int guess_count = 10;

    while(guess_count > 0){
        printf("Enter your guess: ");
        scanf("%d",&guess);

        if(guess == randomNo){
            printf("You Guessed Right!!!\n");
            break;
        }
        else if(guess > randomNo){
            printf("Guess Low\n");
        }
        else if(guess < randomNo){
            printf("Guess high\n");
        }
        guess_count--;
    }
    return 0;
}

