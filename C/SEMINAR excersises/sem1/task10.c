#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,m,veg,fr;
    printf("Enter vegetables price per kg: ");
    scanf("%f",&n);
    printf("Enter fruit price per kg: ");
    scanf("%f",&m);
    printf("Enter vegetables quantity kg: ");
    scanf("%f",&veg);
    printf("Enter fruit quantity kg: ");
    scanf("%f",&fr);
    float sum, euro;
    sum=n*veg+m*fr;
    euro=sum/1.95;
    printf("Income is %.2f euro",euro);

    return 0;
}
