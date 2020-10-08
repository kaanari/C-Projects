#include <stdio.h>

int max;


int main()
{	
	printf("Enter the size of Stack : "); //user can enter the size of the stack
	scanf("%d",&max);
	//... create stack	
	int stack[max],data;
	int top,option,reply;
	//... init stack
	top = -1;
	int i;
	for(i=0;i<max;i++){
		stack[i]=0;
	}
	do
	{
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Show Stack");
		printf("\n 4. Exit");
		printf("\nSelect proper option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : // push
				printf("\n Enter a value : ");
				scanf("%d",&data);
				reply = push(stack,&top,&data);
				if( reply == -1 )
					printf("\nStack is full");
				else
					printf("\n Pushed value");
				break;
			case 2 : // pop
				reply = pop ( stack,&top,&data);
				if( reply == - 1)
					printf("\nStack is empty");
				else
					printf("\n - Popped value is %d",data);
				break;
			case 3 :
				printf("Current Stack:\n");
				for(i=0;i<max;i++){
					printf("\n| %d |\n",stack[i]);
				}
				break;
			case 4 :
				return 0;
		} // switch
	}while(1);
} // main
int push( int stack[max],int *top, int *data)
{
	if( *top == max -1 )
		return(-1);
	else
	{
		*top = *top + 1;
		stack[*top] = *data;
		return(1);
	} // else
} // push
int pop( int stack[max], int *top, int *data)
{
	if( *top == -1 )
		return(-1);
	else
	{
		*data = stack[*top];
		*top = *top - 1;
		return(1);
	} //else
} // pop
