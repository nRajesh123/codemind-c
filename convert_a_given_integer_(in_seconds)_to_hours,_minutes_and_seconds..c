#include<stdio.h>
int main()
{
    int sec,m,h,s;
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-h*3600)/60;
    s=sec-h*3600-m*60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}