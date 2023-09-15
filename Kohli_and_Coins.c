/*Kohli has infinite coins in denominations of rupees 5 and rupees 10.
Find the minimum number of coins Kohli needs, to pay exactly X rupees. If it is impassible
to pay X rupees in denominations of rupees 5 and 10 only, print-1*/


#include<stdio.h>
int main(){
    int x,a,r,c;
    scanf("%d",&x);
    a=x/10;r=x%10;c=r/5;
    if(r==0&&c==0)printf("%d",a);
    else if(r==5&&c==1) printf("%d",a+c);
    else printf("-1");
}
