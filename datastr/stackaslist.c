#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}node;

typedef struct Stack
{
	node * head;
	node * tail;
	int count;
}stack;

stack s;


void push(void)
{
	int num;
	
	printf("enter data");
	scanf("%d",&num);
	node* temp=malloc(sizeof(node));
	if(s.count==0)
	{
		printf("Head case\n");
		s.head=temp;
		temp->data=num;
		temp->next=NULL;

		s.tail=temp;
		(s.count)++;

	}
	else
	{

	s.tail->next=temp;
	temp->data=num;
	temp->next=NULL;
	s.tail=temp;
	(s.count)++;
	}
}

//wrong display as stack is always displayed from top to bottom
void display(void)
{
	node* head=s.head;
	while(head!=NULL)
	{
		printf("data is %d \n",head->data);
		head=head->next;
	}
	return ;
}





int main()
{
	push();
	push();
	push();
	display();	
}

