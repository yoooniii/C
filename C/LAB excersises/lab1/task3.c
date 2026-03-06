#include <stdio.h>
#include <stdlib.h>

int main()
{
//Да се напише програма, която намира лице на правоъгълник по зададени от клавиатурата 2 страни и го извежда на екрана.

    float a, b, s;

    printf("a= ");
    scanf(" %f",&a);

    printf("b= ");
    scanf(" %f",&b);

    s=a*b;
    printf("Area S=%.2f ",s);

return 0;
}
