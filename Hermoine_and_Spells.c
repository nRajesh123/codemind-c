#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&b>c)printf("%d",a+b);
    if(a>b&&c>b)printf("%d",a+c);
    if(b>a&&c>a)printf("%d",b+c);
}