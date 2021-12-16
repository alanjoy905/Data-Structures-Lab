#include<stdio.h>
int choice,n,top,x,i,stack[100];
void push(void);
void pop(void);
void display(void);
void peek(void);
int main()
{
	top=-1;
	printf("\nEnter the Size of the Stack:");
	scanf("%d",&n);
	printf("*******Stack Operations*******");
	printf("\n\t1.POP\n\t2.PUSH\n\t3.DISPLAY\n\t4.PEEK\n\t5.EXIT");
	
do
{
	printf("\nEnter a valid choice:\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		{
			pop();
			break;
		}
		case 2:
		{
			push();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			peek();
			break;
		}
		case 5:
		{
			printf("exitpoint");
			break;
		}
		default:
		{
			printf("*****Enter a valid Operation*****");
			break;
		}
	}
}
	while (choice!=5);
	return 0;
}


void push()
{
	if (top>=n-1)
	{
		printf("\n\t*****STACK IS OVERFLOW*****");
	}
	else
	{
		printf("Enter a value to be PUSH:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t*****STACK IS UNDERFLOW*****");
	}
	else
	{
		printf("\n\tThe popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if (top>=0)
	{
		printf("\nThe Element in Stack:\n");
		for (i=top; i>=0; i--)
		printf("\n%d",stack[i]);
		printf("\npress next choice");
	}
	else
	{
		printf("\nThe Stack is Empty");
	}
}
void peek()
{
	if (top==-1)
	{
		printf("Stack is Empty!!!!!!!!!");
	}
	else
	{
		printf("Peek Element is:%d",stack[top]);
	}
}

	








































	
	
