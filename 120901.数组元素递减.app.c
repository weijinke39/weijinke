#include<stdio.h>
#include<windows.h>
void main(){
int value=91;
int h,l;
int arr2d[9][10]={
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0}
};
	for(h=0;h<9;h++){
	for(l=0;l<10;l++){
		Sleep(100);
		printf("%d ",arr2d[h][l]);
}
		printf("\n");
}

    for(h=0;h<9;h++){
	for(l=0;l<10;l++){
		 value--;
		Sleep(100);	arr2d[h][l]=value;
		printf("%d ",arr2d[h][l]);
	}
	printf("\n");
}
}
