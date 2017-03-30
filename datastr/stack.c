#include<stdio.h>

typedef struct Stack
{
	int stk[100];
	int top;
}stack;
stack s;
void push(void);
int pop(void);
void display(void);
void revstack(void);

int main()
{
	int choice;
	int option = 1;
	s.top = -1;

	printf ("STACK OPERATION\n");
	while (option)
	{
		printf ("------------------------------------------\n");
		printf ("      1    -->    PUSH               \n");
		printf ("      2    -->    POP               \n");
		printf ("      3    -->    DISPLAY               \n");
		printf ("      4    -->    EXIT           \n");
		printf ("------------------------------------------\n");

		printf ("Enter your choice\n");
		scanf    ("%d", &choice);
		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
		}
		printf ("Do you want to continue(Type 0 or 1)?\n");
		scanf    ("%d", &option);
	}
}
void push()
{
	int num;

	if(s.top==(100-1))
	{
		printf("Stack is full\n");
		return ;
	}
	else
	{
		s.top=s.top+1;
		printf("enter data");

		scanf("%d",&s.stk[s.top]);
	}
	return ;
}
void revstack(void)
{

int pop()
{
	int num;

	if(s.top==-1)
	{
		printf("Stack is empty");
		return(s.top) ;
	}
	else
	{
		int num=s.stk[s.top];
		printf("Poped element is=%d ",s.stk[s.top]);
		s.stk[s.top]=NULL;
		s.top-=1;
	}
	return num;
}
void display ()
{
	int i;
	if (s.top == -1)
	{
		printf ("Stack is empty\n");
		return;
	}
	else
	{
		printf ("\n The status of the stack is \n");
		for (i = s.top; i >= 0; i--)
		{
			printf ("%d\n", s.stk[i]);
		}
	}
	printf ("\n");
}




