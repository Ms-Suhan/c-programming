#include <stdio.h>
#include <math.h>

int main(){
    double radius = '\0';
    double area = 0.0;
    const double PI = 3.141;

    printf("Enter the radius: ");
    scanf("%lf",&radius);

     area =PI * pow(radius,2);

    printf("The area of the circle is %lf\n", area);
}