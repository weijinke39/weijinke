#include<stdio.h>
#include<windows.h>
void main(){
printf("友情提示：请猜1—10的数字,\n");
	int a=6,b,c;
		for(c=0;c<10;c++){
		scanf("%d",&b);
		if(b==a){
		printf("恭喜你猜对了\n");
		}
		else if(b<a){
		printf("猜的太小了");
		}
		else{printf("猜的太大了");}
		}
    
}
