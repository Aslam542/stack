#include<stdio.h>
void push(int);
int isfull();
int isempty();
int pop();
int a[100];
int n;
int top=0;

void main()
{
	int c,d;
	
	printf("enter limit of stack\n");
	scanf("%d",&n);
	do
	{
		printf("\n1 : PUSH\n2 : POP\n3 : ISEMPTY\n4 : ISFULL\n5 : EXIT\n");
		printf("SELECT YOUR CHOICE");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:	if(isfull()==1)	printf("stack is full\n");
					else
					{
						printf("enter the number\n");
						scanf("%d",&d);
						push(d);
					}			
					break;
					
			case 2:	if(isempty()==1)	printf("stack is empty");
					else				printf("%d",pop());
					break;
					
			case 3:	if(isempty()==1)	printf("stack is empty\n");
					else		printf("stack is not empty\n");		
					break;
					
			case 4:	if(isfull()==1)	printf("stack is full\n");
					else		printf("stack is not full\n");			
					break;
				
			case 5:	printf("program exited\n");
					break;
				
			default:	printf("enter the valid choice\n");		
					break;		
		}
	}while(c!=5);
}
void push(int d)
{
	if(isfull()==1)	printf("stack is full\n");
	else 
	{
		top=top+1;
		a[top]=d;
	}
}
int isfull()
{
	if(top==n) return 1;
	else		return 0;
}
int isempty()
{
	if(top==0) return 1;
	else		return 0;
}
int pop()
{
	if(isempty()==1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		int d;
		d =a[top];
		top=top-1;
		return d;
	}
}
