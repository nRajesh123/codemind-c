#include<stdio.h>
int main(){
int M,N,i,c=0;
scanf("%d%d",&M,&N);
for(i=M;i<=N;i++)
if(i%2==0&&i%3==0){
c+=1;}
printf("%d",c);
}