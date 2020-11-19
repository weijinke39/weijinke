#include<stdio.h>
void main()
{
int x,y;
printf("输入x");
scanf("%d",&x);
if(x<1)          //x<1
{y=x;
printf("x=%d,y=x=%d\n",x,y);
}
else if(x<10)     //1=<x<10
{y=2*x-1;
printf("x=%d,y=2*x=%d\n",x,y);
}
else    //x>=10
{y=3*x-11;
printf("x=%d,y=3x-11=%d\n",x,y);
}
}
