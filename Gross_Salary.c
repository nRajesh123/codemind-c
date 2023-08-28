#include<stdio.h>
int main()
{
    int a;
    float da,hra,g;
    scanf("%d",&a);
    if(a<=10000)
    { da=(a/100.0)*80;
      hra=(a/100.0)*20;
      g=a+da+hra;
      printf("%.2f",g);
    }
    else if(a<=20000&&a>10000)
    { da=(a/100.0)*90;
      hra=(a/100.0)*25;
      g=a+da+hra;
      printf("%.2f",g);
    }
    else
    {da=(a/100.0)*95;
      hra=(a/100.0)*30;
      g=a+da+hra;
      printf("%.2f",g);
        
    }
}