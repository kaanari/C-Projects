#include<stdio.h>

int main(){
	int num,digit=1;
	printf("Enter a Number\n");
	scanf("%d",&num);
	while(num>=10){
		num=num/10;
		digit++;
	}
	printf("Number of digit = %d",digit);
}
