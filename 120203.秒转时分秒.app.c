#include<stdio.h>
void main(){
	int a,b,c,d;
  scanf("%d",&a);

	b=a/3600;      
	c=(a%3600)/60;     //%表示余数
       d=a-3600*b-60*c;
		printf("%.2d时:",b);      //%.2表示保留两位小数
		printf("%.2d分:",c);
		printf("%.2d秒:",d);
}
