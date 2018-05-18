#include<stdio.h>

void changer(int *x1,int *x2){
 	int temp=*x2;
 	*x2=*x1;
 	*x1=temp;
}

int main(){
	int a=5,b=0;
	changer(&a,&b);
	printf("a= %d b= %d",a,b);
}

