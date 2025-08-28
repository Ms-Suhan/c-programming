#include <stdio.h>

typedef char String[];

int main(){

    FILE *pFile = fopen("read.txt", "r");
    char buffer[1024] = {0};


    if(pFile == NULL){
        printf("Error cannot open file\n");
        return 1;
    }

    while(fgets(buffer,sizeof(buffer),pFile) != NULL){
        printf("%s\n",buffer);
    }
    fclose(pFile);
}