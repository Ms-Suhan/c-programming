#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age);  // function prototyping...

    // function prototype = Provide the computer W/ information about a function's:
    //                      name, return type, and parameters. before its actual defination.
    //                      Enables type checking and allows function to be used before they're defined.
    //                      Improves readability, organization, and help prevent errors.

int main(){
    int age = 18;
    if(ageCheck(age)){
        printf("Your are eligible to work!!!\n");
    }else{
        printf("You must be 18+ to work\n");
    }
}

bool ageCheck(int age){
    return age >= 18;
}