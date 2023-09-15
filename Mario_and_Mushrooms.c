/*Mario transforms each time he eats a mustiroom as follows:
if he is currently small he turns normal
if he is currently normal he turns huge the is currently huge, he turns smail.
Given that Mario was initially normal, find his size after eating X mushrooms */


#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%3==0)printf("NORMAL");
    if(x%3==1)printf("HUGE");
    if(x%3==2)printf("SMALL");
}
