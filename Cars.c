#include<stdio.h>
int main(){
    int n,rp,p;
    scanf("%d",&n);
    p=n/4;rp=n%4;
    if(n%4!=0)printf("%d",p+1);
    else printf("%d",p);
}