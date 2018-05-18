#include <stdio.h>
void recursion(int x){
	if(x>0){
		printf("%d - ",x);
		return 	recursion(x-1);
	}else if(x==0){
		printf("%d",x);
	}
}
int main(){
	int num;
	while(1){
		printf("\nEnter Number : ");
		scanf("%d",&num);
		recursion(num);
	}
}
