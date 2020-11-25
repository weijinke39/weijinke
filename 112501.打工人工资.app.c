#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a>=0&&a<=100){
printf("回家种田吧");
}
else if(a>100&&a<=2000){
printf("回家养猪吧");
}
else if(a>2000&&a<=10000){
printf("带着富婆去打工");
}
else{
printf("输入错误！！");
}
}
