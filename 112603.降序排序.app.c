#include<stdio.h>
void main(){
int a,b,c,s;
scanf("%d%d%d",&a,&b,&c);
if(a>b){
s=a;
a=b;
b=s;
}
if(a>c){
s=a;
a=c;
c=s;
}
if(b>c){
s=b;
b=c;
c=s;
}
printf("%d\n%d\n%d\n",a,b,c);
}
