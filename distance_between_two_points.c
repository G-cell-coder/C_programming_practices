#include <stdio.h>
#include<math.h>
int main() {
   float x1, y1, x2, y2, gd;
   printf("Provide are the coordinates of 2 points like (x1, y1) and ( x2, y2)");
   scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
   gd = (( x2-x1)*(x2-x1))+((y2-y1) * (y2-y1));
   printf("Distance between the said points: %f", sqrt(gd));
   return 0;
}
