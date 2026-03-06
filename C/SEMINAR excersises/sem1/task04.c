#include <stdio.h>
#include <stdlib.h>

int main()
{
    double degree;
    printf("Enter degrees: ");
    scanf("%lf",&degree);
    double rad;
    rad=degree*0.0174532925;
    printf("%lf radians",rad);
   
    return 0;
}
