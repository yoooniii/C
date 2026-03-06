#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("x= ");
    scanf("%d",&x);
    printf("Promenliva x=%d\n",x);

    double y;
    printf("y= ");
    scanf("%lf",&y);
    printf("Promenliva y=%lf\n",y);

    float f;
    printf("f= ");
    scanf("%f",&f);
    printf("Promenliva f=%f\n",f);

    char c;
    printf("c= ");
    scanf(" %c",&c);
    printf("Promenliva c= %c\n",c);

return 0;
}
