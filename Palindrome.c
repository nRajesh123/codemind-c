//python program to check whether the given number is palindrome or not.


#include<stdio.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    int m=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;}
    if(m==rev) printf("Palindrome");
    else printf("Not Palindrome");
    }
