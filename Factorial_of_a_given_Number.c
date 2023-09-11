#include<stdio.h>
int main(){
    int n,i=1,f=1;
    scanf("%d",&n);
    for(i;i<=n;i++){
        f*=i;
    }printf("%d",f);
}