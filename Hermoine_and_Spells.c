/*Hermoine has three spells. Their powers are A, B, and C respectively Initially, Hermaine has 0 hit points, and if she uses a spell with power P, then her number of hit points increases
by P.
Before going to sleep, Hermaine wants to use exactly two spells out of these three: Find the maximum number of hit points Hermoine can have after using the spells
It is quaranteed that A, B and C voules are distinct*/


#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&b>c)printf("%d",a+b);
    if(a>b&&c>b)printf("%d",a+c);
    if(b>a&&c>a)printf("%d",b+c);
}
