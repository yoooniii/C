#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bgn;
    printf("Enter bgn: ");
    scanf("%f",&bgn);
    double usd, euro, gbp;
    usd=bgn*0.6;
    euro=bgn*0.51;
    gbp=bgn*0.45;
    printf("%.2f usd, %.2f euro, %.2f gbp", usd,euro,gbp);

    return 0;
}
