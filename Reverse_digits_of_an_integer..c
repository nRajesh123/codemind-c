//python program to revers the digits of a number.


#include<stdio.h>
int main(){
    int n,rev=0,r;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }printf("%d",rev);
    
}
