#include<stdio.h>
int main()
{
    int u;
    float c,b1,b2,b3;
    scanf("%d",&u);
    if(u<200)
    { b1=u*1.20+100;
     printf("%.2f",b1);
    }
    else if(u>=200&&u<400)
    {b1=u*1.50;
     b2=b1+100;
     b3=(b1/100)*15+b1;
    if(b1<400)
     printf("%.2f",b2);
    else
     printf("%.2f",b3);}
    else if(u>=400&&u<600)
    { b1=u*1.80;
     b2=b1+100;
     b3=(b1/100)*15+b1;
    if(b1<400)
     printf("%.2f",b2);
    else
     printf("%.2f",b3);}
    else
    {b1=u*2.00;
     b2=(b1/100)*15+b1;
     printf("%.2f",b2);}
}