#include<stdio.h>

int main(void){
	FILE *inp;
	int count,total=0;
	int x=0,i=0;
	inp=fopen("try.txt","r");
	
	while(count!=EOF){
		count=fscanf(inp,"%d",&x);
		if(count==EOF){
			printf("TOTAL = %d",total);
			break;
		}else{
			total=x+total;
			printf("%d\n",x);
		}
	}
	fclose(inp);
}
