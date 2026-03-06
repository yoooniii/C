#include <stdio.h>
#include <stdlib.h>

int main()
{
    double l, x;
    int days;
    printf("Wall length L: ");
    scanf("%lf",&l);
    printf("Enter x: ");
    scanf("%lf",&x);
    days=l/x;
    printf("Days to paint the wall - %d days", days);
    return 0;
}
