#include<stdio.h>
void main(){
int h,l;
int a[2][3]={
	{1,2,3},
	{4,5,6}
};
for(h=0;h<2;h++){  
	for(l=0;l<3;l++){
	printf("%d ",a[h][l]);
}printf("\n");
}
}
