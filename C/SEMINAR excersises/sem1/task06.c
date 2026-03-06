#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,h;
    printf("Enter a, b and h: ");
    scanf("%lf %lf %lf",&a,&b,&h);
    double s;
    s=(a+b)*h/2;
    printf("Area is %.2lf cm",s);
    return 0;
}
