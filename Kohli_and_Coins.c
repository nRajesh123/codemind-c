#include<stdio.h>
int main(){
    int x,a,r,c;
    scanf("%d",&x);
    a=x/10;r=x%10;c=r/5;
    if(r==0&&c==0)printf("%d",a);
    else if(r==5&&c==1) printf("%d",a+c);
    else printf("-1");
}