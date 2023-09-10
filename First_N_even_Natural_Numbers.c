#include<stdio.h>
int main(){ 
    int n,i;
    scanf("%d",&n);
    i=n*2;
    while(i>=1){
        printf("%d ",i);
        i=i-2;
    }
}