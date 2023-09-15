/*Mario transforms each time he eats a mustiroom as follows:
if he is currently small he turns normal
if he is currently normal he turns huge the is currently huge, he turns smail.
Given that Mario was initially normal, find his size after eating X mushrooms */


#include<stdio.h>
int main()
{
    int m,M,H;
    scanf("%d",&m);
    H=m/60;
    M=m%60;
    printf("%d Hour(s) %d Minute(s)",H,M);
}
