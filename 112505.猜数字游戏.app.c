#include<stdio.h>
#include<windows.h>
void main(){
printf("友情提示：请猜1—10的数字,\n");
	int a=6,b,c;
		for(c=0;c<10;c++){
		scanf("%d",&b); //acanf表示格式输入函数。%d表示十进制，%o八进制，%x十六进制，%u无符号十进制形式输出整数，%c符号形式输出，%s输出字符串，%f以小数形式输出，%e以指数形式输出。
		if(b==a){                  //双==表示判断。
		printf("恭喜你猜对了\n");
		}
		else if(b<a){
		printf("猜的太小了");
		}
		else{printf("猜的太大了");}
		}
    
}
