#include <stdio.h>

int main(){
    // Variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.


    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character( 1  byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1byte, requires <stdbool.in>)
    int age = 25;

    printf("You are %d years old\n", age);
    // %d format specifier

    float gpa = 3.534;

    printf("Your cgpa if %.1f\n",gpa);


    double pi = 3.14159265358979;

    printf("The value of pie is %8f", pi);

    // char 
    char grade = 'A';

    printf("Your grade is %c\n",grade);



    char name[] = "ms suhan";

    printf("Hellow %s\n",name);

    return 0;
}