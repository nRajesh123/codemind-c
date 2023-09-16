#include<stdio.h>
int main(){
    int D,C,A1,A2,A3,B1,B2,B3,A,B;
    scanf("%d%d%d%d%d%d%d%d",&D,&C,&A1,&A2,&A3,&B1,&B2,&B3);
    A=A1+A2+A3;B=B1+B2+B3;
    if(A>=150&&B>=150&&C<D+D)printf("YES");
    else if(A>=150&&B<150&&C+D<D+D)printf("YES");
    else if(A<150&&B>=150&&C+D<D+D)printf("YES");
    else printf("NO");
}