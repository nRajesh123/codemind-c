#include<stdio.h>
//#include<math.h>
int main()
{
    int r;
    float a,p,pi=3.14;
    scanf("%d",&r);
    //a=pi*pow(r,2);
    a=pi*r*r;
    p=2*pi*r;
    printf("%.2f
%.2f",a,p);
}