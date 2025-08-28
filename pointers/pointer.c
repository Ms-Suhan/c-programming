#include <stdio.h>

int birthday(int* age);


int main(){
    // Pointers = A varible that stores memory address of another variable
    //            Benifit: They avoid wastage of memory by allowing you to pass the address
    //            of the large datastructure  instead of copying the entire data.

    int age = 23;

    int *pAge = &age;

    birthday(pAge);
    printf("%d",age);    
}

int birthday(int *age){
    (*age)++;
}

