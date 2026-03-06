#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float m, usd, bonus, net, year, taxed, bgn;
    printf("Enter work days: ");
    scanf("%d",&n);
    printf("Enter daily earning: ");
    scanf("%f",&m);
    bonus=n*m*2.5;
    year=n*m*12+bonus;
    taxed=year-year*0.25;
    net=taxed/365;
    printf("Enter usd convert: ");
    scanf("%f",&usd);
    bgn=net*usd;
    printf("Daily income is %.2f bgn",bgn);
   
    return 0;
}
