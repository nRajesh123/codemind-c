/*An electronics shop sells red and blue lamps. A red lamp costs X rupees and a blue lamp costs Y rupees.
Amar is going to buy exactly N lamps from this shop. Find the minimum amount of money Amar needs to pay such that at least K of the lamps bought are red.*/


#include<stdio.h>
int main(){
    int n,k,x,y,a,b,c,c1;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    a=x*k;b=n-k;c=b*y;c1=x*b;
    if(c>c1)printf("%d",a+c1);
    else printf("%d",a+c);
    
}
