/*King is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10 inclusive). 
King wins the game when the sum of these 3 numbers is exactly 21.
Given the first two numbers A and B, that have been drawn by King, what should be 3-rd number that should be drawn by the King in order to win the game?
Note that it is possible that King cannot win the game, no matter what is the 3-rd number. In such cases, report l'as the answer */

#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=21-a-b;
    if(a+b>=11)printf("%d",n);
    else printf("-1");
}
