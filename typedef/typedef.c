#include <stdio.h>

typedef int Number;
typedef char String[50];


int main(){

    // typedef = Reserved keyword that gives an exisiting datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_datatype new_name;

    Number num1 = 2;
    String name = "Suhan";
    printf("%d\n",num1);
    printf("%s\n",name);
    return 0;
}