#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=21-a-b;
    if(a+b>=11)printf("%d",n);
    else printf("-1");
}