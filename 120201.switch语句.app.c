#include<stdio.h>
void main(){
	int n;
	printf("大学查询系统.\n温馨提示，请输入1——20的数字");
	for(n=0;n<20;n++){
	scanf("%d",&n); 
	switch(n){
	case 1:printf("1哈佛大学");break;
	case 2:printf("2斯坦福大学");break;
		case 3:printf("3剑桥大学");break;
			case 4:printf("4加州大学伯克利分校");break;
				case 5:printf("5麻省理工大学");break;
					case 6:printf("6加州理工学院");break;
						case 7:printf("7普林斯顿大学");break;
							case 8:printf("8牛津大学");break;
								case 9:printf("9哥伦比亚大学");break;
									case 10:printf("10芝加哥大学");break;
case 11:printf("11耶鲁大学");break;
	case 12:printf("12康奈尔大学");break;
		case 13:printf("13加州大学圣地亚哥分校");break;
			case 14:printf("14东京大学");break;
				case 15:printf("15宾夕法尼亚大学");break;
					case 16:printf("16加州大学洛杉矶分校");break;
						case 17:printf("17加州大学旧金山分校");break;
							case 18:printf("18威斯康星大学");break;
								case 19:printf("19密歇根大学");break;
									case 20:printf("20华盛顿大学");break;
    default: printf("输入错误，请输入1——20的数值");
	}
	}
}
