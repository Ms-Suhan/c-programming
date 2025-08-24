#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    // Psuedo Random - Appear random but are determined by mathemaical formula that uses a seed value to
    //                 to generate a predictible sequence of numbers.
    //                 Advanced - Mersenna Twister or dev/random

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNumber = (rand() % (max -min + 1)) + min;

    printf("%d\n",randomNumber);

    return 0;
}