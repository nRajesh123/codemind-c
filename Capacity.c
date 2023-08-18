#include<stdio.h>
int main()
{
    int t,s,b,capacity;
    scanf("%d%d%d",&t,&s,&b);
    capacity=t*s*b;
    printf("%d KB",capacity);
}