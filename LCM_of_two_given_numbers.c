#include<stdio.h>
int main(){
long long a,b,mul,min,max;
scanf("%lld%lld",&a,&b);
if(a!=b){
    if(a>b){max=a;min=b;}
    else {max=b;min=a;}}
int i=1;
while(1){
    mul=max*i;
    if(mul%min==0){printf("%lld",mul);break;}
    else i++;
    }
}