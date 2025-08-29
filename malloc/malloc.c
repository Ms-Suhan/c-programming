#include <stdio.h>
#include <stdlib.h>

int main(){

    // malloc = A function in c that dynamically allocates specified number of bytes in memory.
    int num;
    printf("Enter the number of grades: ");
    scanf("%d",&num);

    char *grades = (char*)malloc(10000);

    if(grades == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < num + 1; i++){
        printf("Enter the grade: ");
        scanf(" %c",&grades[i]);
    }

    for(int i = 0; i < num+1; i++){
        printf(" %c",*grades);
    }
    printf("\n%d",sizeof(grades));
    
    free(grades); // Returning the rented space back to os
    grades = NULL; // avoids dangling pointers
    return 0;
}