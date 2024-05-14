#include<stdio.h>

void main(){
    float r, p, a;
    printf("Enter the radius of the circle for which area and perimeter to be calculated:\n");
    scanf("%f",&r);
    p = 2 * 3.14 * r;
    a = 3.14 * r * r;
    printf("The perimeter of the circle is: %f \t and area of the circle is: %f \t", p,a);

}