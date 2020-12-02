#include<stdio.h>
void main(){
	int n;
	printf("煞笔游戏提示程序\n");

	scanf("%c",&n); 
	switch(n){
		case 'w':printf("你点的是上键");break;
	      case 's':printf("你点的是下键");break;
		    case 'a':printf("你点的是左键");break;
		    	case 'd':printf("你点的是右键");break;
			

    default: printf("输入错误，请输入wsad其中一个字母");
	}
	
}
