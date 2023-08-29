#include<stdio.h>
int main()
{
    int p,c,m,b,cs;
    float pg;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    pg=((p+c+m+b+cs)*1.0/500)*100;
    if(pg>=90)
    printf("Grade A");
    else if(pg>=80)
    printf("Grade B");
    else if(pg>=70)
    printf("Grade C");
    else if(pg>=60)
    printf("Grade D");
    else if(pg>=40)
    printf("Grade E");
    else
    printf("Grade F");
}