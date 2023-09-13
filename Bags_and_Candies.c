#include<stdio.h>
int main(){
    int k,m,n,r,c;
    scanf("%d%d%d",&n,&k,&m);
    c=n/(k*m);r=n%(k*m);
    if(r==0)printf("%d",c);
    else printf("%d",c+1);
}