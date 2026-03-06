#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//да се напише програма, която изчислява повърхнината и обемът на паралелепипед, форматиране до втори знак

    double a, b, c, s, s1, v;
    printf("a= ");
    scanf(" %lf",&a);
    printf("b= ");
    scanf(" %lf",&b);
    printf("c= ");
    scanf(" %lf",&c);
    s=2*c*(a+b);
    s1=2*(a*b+b*c+a*c);
    v=a*b*c;
    printf("Volume V=%.2lf, Area S=%.2lf, S1=%.2lf",v,s,s1);

return 0;
}
