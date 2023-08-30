#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    p=a;
    if(b>a&&b>c)
    p=b;
    if(c>a&&c>b)
    p=c;
    printf("%d",p);
}