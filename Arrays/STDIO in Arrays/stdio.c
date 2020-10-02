#include<stdio.h>

void main(){
	int num,i=0;
	printf("How many integer will you enter?\n")
	scanf("%d",&num);
	int inputs[num];
	for(i=0;i<num;i++){
		scanf("%d",&inputs[i]);
	}
	i=0;
	for(i=0;i<num;i++){
		printf("%d",inputs[i]);
	}
}

