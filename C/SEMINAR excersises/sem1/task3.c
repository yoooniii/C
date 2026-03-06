#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c;
    printf("Enter celsius: ");
    scanf("%lf", &c);
    double f;
    f=c*33.8;
    printf("%.2lf degrees fahrenheit",f);
    
    return 0;
}
