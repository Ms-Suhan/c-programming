#include <stdio.h>


int main(){

    int hours = 11;
    int minutes = 2;

    printf("%02d:%02d %s\n", hours, minutes, hours < 12? "AM":"PM");
    return 0;
}