#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, r;
    printf("Enter a and b: ");
    scanf("%lf %lf",&a,&b);
    if(a>b){
        r=b;
    }else {
        r=a;
    }
    printf("Най-големият възможен радиус е %.2lfm",r);
   
    return 0;
}
