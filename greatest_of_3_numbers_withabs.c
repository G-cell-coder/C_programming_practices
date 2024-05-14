#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b , c;
    printf("Enter the 3 numbers for which you need to calcultate maximum of those three numbers:\n");
    scanf("%d %d %d", &a, &b,&c);
    int result;
    result = (a + b + abs((a - b )))/2;

    int max = ( result + c + ( abs( result - c)))/2;

    printf("\n Maximum value of the feeded 3 numbers is: %d\n", max);
    return 0;
}
