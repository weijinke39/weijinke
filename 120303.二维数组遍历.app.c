#include<stdio.h>
#include<windows.h>
void main(){
int h,l;
int a2d[10][20]={
    {999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
	{999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999},
    {999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999,999}
};
for(h=0;h<10;h++){
	for(l=0;l<20;l++){
		printf("%d ",a2d[h][l]);
}
		printf("\n");
}
 

	for(h=0;h<10;h++){
	for(l=0;l<20;l++){		
     Sleep(1000); a2d[h][l]=0;
		printf("%d ",a2d[h][l]);	
}
		printf("\n");
}
}
