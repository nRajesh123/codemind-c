/*A single car can accommodate at most 4 peopleN friends want to go to a restaurant for a party. 
Find the minimum number of cars required to accommodate all the friends*/


#include<stdio.h>
int main(){
    int n,rp,p;
    scanf("%d",&n);
    p=n/4;rp=n%4;
    if(n%4!=0)printf("%d",p+1);
    else printf("%d",p);
}
