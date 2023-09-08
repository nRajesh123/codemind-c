#include<stdio.h>
int main(){
    int n,sf=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
     if(n%i==0)sf+=i;
    }printf("%d",sf);
}
