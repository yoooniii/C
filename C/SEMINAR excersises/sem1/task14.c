#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, w, s, lx, ly ,ls,ss;
    printf("Enter swimming pool size x y and lane w: ");
    scanf("%lf %lf %lf",&x, &y, &w);
    lx=x+w;
    ly=y+w;
    ls=lx*ly;
    ss=x*y;
    s=ls-ss;
    printf("S na putekata e %.2lf m", s);
   
    return 0;
}
