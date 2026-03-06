#include <stdio.h>
#include <stdlib.h>

int main()
{
    double inch;
    printf("Enter inches: ");
    scanf("%lf", &inch);
    double cm,dm,mm,m;
    cm=inch*2.54;
    dm=cm/10.0;
    m=dm/10.0;
    mm=cm*10.0;
    printf("%lfm %lfdm %lfcm %lfmm", m,dm,cm,mm);
    return 0;
}
