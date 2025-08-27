#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    typedef struct {
        char name[50];
        int age;
        float gpa;
        bool isFullTime;
    }Student;

    Student std1 = {"Suhan", 23, 4.5, true};
    Student std2 = {0};

    printf("%s\n",std1.name);
    printf("%d\n",std1.age);
    printf("%f\n",std1.gpa);
    printf("%s\n",(std1.isFullTime)? "YES": "NO");

    // std2.name = "gaurav"; // error


    strcpy(std2.name,"gaurav");
    std2.age =24;
    std2.gpa =4.2;
    std2.isFullTime = false;

    printf("%s\n",std2.name);
    return 0;
}