#include<stdio.h>
void a(){
printf("你好,单身狗!!!!");
}
void b(){
a();
}
void c(){
b();
}
void d(){
c();
}
void e(){
d();
}
void f(){
e();
}
void main(){
e();
}
