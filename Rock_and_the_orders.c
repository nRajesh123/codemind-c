*/Rock wants to order food from a food delivery app. He wishes to order once today, and buy three items costing A1, A2 and A3 rupees, respectively. 
Hell also order once tomorrow, when he'll buy three items costing B1, B2 and 83 rupees, respectively. There is an additional delivery charge of rupees D for each order,

Write Your Code
He notices that there is a coupon on sale, which costs rupees C. If he buys that coupon. the delivery charges on any day, 
on an order of rupees 150 or more shall be waived (that is, the D rupees will not be added, if the sum of the costs of the items is a 150)
Note that Rock is ordering the three items together an each day, so the delivery charge is charged only once each day. Also, note that it's only needed to buy the coupon once to avail the delivery fee waiver on both days
Should Rock buy the coupon? Note that Rock shall buy the coupon only if it costs him strictly less than what it costs him without the coupon, in total.*/

    
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
