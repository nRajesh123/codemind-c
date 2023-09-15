/*Rom received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most M candies. 
Find the minimum number of bags Ram needs so that he can put every candy into a bag*/

#include<stdio.h>
int main(){
    int k,m,n,r,c;
    scanf("%d%d%d",&n,&k,&m);
    c=n/(k*m);r=n%(k*m);
    if(r==0)printf("%d",c);
    else printf("%d",c+1);
}
