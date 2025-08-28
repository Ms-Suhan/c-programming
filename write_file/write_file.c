#include <stdio.h>

typedef char String[];
int main(){

    FILE *pFile = fopen("output.txt", "w");

    
    String text = "test text2";
    if(pFile == NULL){
        printf("Error while writing file\n");
        return  1;
    }

    fprintf(pFile,"%s",text);
    printf("File was written Successfully!");

    fclose(pFile);
}