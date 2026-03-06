#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//Да се напише програма, която намира обиколката на окръжност по зададен диаметър от клавиатурата и извежда резултата на екрана.

    float d, p;

    printf("d= ");
    scanf(" %f",&d);
    p=3.14*d;
    printf("Perimeter P=%.2f ",p);

return 0;
}
