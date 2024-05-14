#include<stdio.h>
void main(){
    int a,b;
    printf("enter the integers to get sum up through one and next line with another integer: \n");
    scanf("%d%d",&a, &b);
   // scanf("%d", &a);
    //scanf("%d", &b );
    int sum = a + b;
    printf("Sum of the integers is:%d", sum);
}