#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
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
    */

/*
    int x;
    int y;

    printf("x= ");
    scanf(" %d",&x);

    printf("y= ");
    scanf(" %d",&y);

    printf("Sbor %d \n",x+y);
    printf("Umnojenie %d \n",x*y);
    printf("Delenie s ostatuk %f \n",x%y);
    printf("x-=y %d \n",x-=y);
    printf("x/=y %d \n",x/=y);
    printf("x*=y %d \n",x*=y);
    printf("Increment %d \n",x++);
    printf("Decrement %d \n",x--);
    printf("Stepenuvane %d \n",x^^y);
*/

//zad1
/*
    float a;
    float b;
    float s;

    printf("a= ");
    scanf(" %f",&a);

    printf("b= ");
    scanf(" %f",&b);

    s=a*b;
    printf("Area S=%.2f ",s);
    */
//zad2
/*
    float d;
    float p;
    printf("d= ");
    scanf(" %f",&d);
    p=3.14*d;
    printf("Perimeter P=%.2f ",p);

    */
    /*
    int y, a, b, c;
    printf("a= ");
    scanf(" %d",&a);
    printf("b= ");
    scanf(" %d",&b);
    printf("c= ");
    scanf(" %d",&c);

    y=4*a+5*(b+4*c)*(b+4*c);
     printf("Result: y= %d\n",y);
*/

//да се напише програма, която изчислява повърхнината и обемът на паралелепипед, форматиране до втори знак

    double a, b, c, s, s1, v;
    printf("a= ");
    scanf(" %lf",&a);
    printf("b= ");
    scanf(" %lf",&b);
    printf("c= ");
    scanf(" %lf",&c);
    s=2*c*(a+b);
    s1=2*(a*b+b*c+a*c);
    v=a*b*c;
printf("Volume V=%.2lf, Area S=%.2lf, S1=%.2lf",v,s,s1);
return 0;
}
