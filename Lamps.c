#include<stdio.h>
int main(){
    int n,k,x,y,a,b,c,c1;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    a=x*k;b=n-k;c=b*y;c1=x*b;
    if(c>c1)printf("%d",a+c1);
    else printf("%d",a+c);
    
}