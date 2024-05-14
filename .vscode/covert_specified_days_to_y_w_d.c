#include<stdio.h>
void main(){
    int nd, y, w, d, ry,rw;
    printf("Enter the days for which you need to know how many years, weeks and days it accomodates");
    scanf("%d",&nd);
    y = nd / 365;
    ry = nd % 365;
    w = ry / (7);
    rw = ry % 7;
    d = rw;

    printf(" Years : %d, Weeks: %d and days: %d", y, w, d);

}