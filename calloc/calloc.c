#include <stdio.h>
#include <stdlib.h>

int main(){

    // calloc() = Contagious Allocation.
    //            Allocates the memory dynamically and set the allocated bytes to 0.
    //            malloc() is faster, but calloc() leads to less bugs calloc(#,size)
    int number = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&number);

    int *scores = malloc(number * sizeof(int));
    if(scores == NULL){
        printf("Memory Allocation Failed !!!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter the element #%d: ",i + 1);
        scanf("%d",&scores[i]);
    }

    
    for(int i = 0; i < number; i++){
        printf("%d ",scores[i]);
    }

    free(scores);
    scores = NULL;


    return 0;
}