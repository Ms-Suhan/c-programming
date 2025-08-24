#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "";

    while(strlen(name) == 0){
        printf("Enter your name: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name) - 1 ] = '\0';
    }
    return 0;
}