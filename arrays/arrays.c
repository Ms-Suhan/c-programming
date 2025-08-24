#include <stdio.h>

int main(){
    int num[] = { 10, 20, 30, 40, 50 };

    // arrays = a fixed size collection of elements of same data type.
    //          similar to a variable but i holds  multiple values

    printf("%d\n",num[2]);

    for(int i = 0; i<5; i++){
        printf("%d ",num[i]);
    }
    printf("\n%d\n",sizeof(num[0]));
    int size = sizeof(num) / sizeof(num[0]);

    printf("%d\n",size);

    // multi dimensional arrays

    int arr[][3] = {{1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9}, 
                    {12, 34, 73}};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}