#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("x= ");
    scanf("%d",&x);

    printf("y= ");
    scanf("%d",&y);

    printf("Sbor %d\n", x + y);
    printf("Umnojenie %d\n", x * y);
    printf("Delenie s ostatuk %d\n", x % y);
    printf("x-=y %d\n", x -= y);
    printf("x/=y %d\n", x /= y);
    printf("x*=y %d\n", x *= y);
    printf("Increment %d\n", x++);
    printf("Decrement %d\n", x--);
    printf("Stepenuvane %f\n", pow(x, y));

return 0;
}
