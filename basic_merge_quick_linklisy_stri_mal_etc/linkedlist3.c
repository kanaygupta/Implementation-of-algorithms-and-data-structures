#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node * next;
}node;


int main()
{
	int n,x;
	scanf("%d",&n);
	//node *head=NULL;
	scanf("%d",&x);
	int i;

	node* head=malloc(sizeof(node));
	head->data=x;
	head->next=NULL;

	node* ptr=head;

	for(i=1;i<n;i++)
	{
		scanf("%d",&x);

		node* temp=(node*)malloc(sizeof(node));
		temp->data=x;
		temp->next=NULL;
		head->next=temp;
		head=head->next;
	}
	//head->next=NULL;
	i=0;

	while(ptr!=NULL)
	 {
		 printf("%d ",ptr->data);
		 ptr=ptr->next;
	 	
	 }


}
