//python program to print odd natural numbers starting from 1.


#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i+=2;
    }
}
