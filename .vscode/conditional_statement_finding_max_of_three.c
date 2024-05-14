#include <stdio.h>
void main(){
    int a, b , c;
    printf("Enter the 3 numbers for which you need to calcultate maximum of those three numbers:\n");
    scanf("%d %d %d", &a, &b,&c);
    if (a > b){
        if(a > c)
        {
            printf("A with value: %d is maximum of the 3 numbers feeded \n", a);
        }
        else if (c > b)
        {
        printf("C with value: %d is maximum of the 3 numbers feeded \n", c);
        }
    }
    else if (b > c)
        {
            printf("B with value: %d is the maximum of 3 numbers feeded \n",b);
        }
    else {
            printf("C with value: %d is the maximum of the 3 numbers feeded \n",c);
        }
       
}
