#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y, a, b, c;
    printf("a= ");
    scanf(" %d",&a);
    printf("b= ");
    scanf(" %d",&b);
    printf("c= ");
    scanf(" %d",&c);

    y=4*a+5*(b+4*c)*(b+4*c);
    printf("Result: y= %d\n",y);
  
return 0;
}
