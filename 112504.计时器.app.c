
#include<stdio.h>
#include<windows.h>
void main(){
	int a;
	printf("现在开始记时\n");
	for(a=1;;a++){           //for表示循环，a=1表示从1开始，a++表示一直累加下去。
	Sleep(1000);
	printf("现在是%d秒\n",a);
	}
	}
	
