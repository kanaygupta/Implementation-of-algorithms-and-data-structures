#include<bits/stdc++.h>
using namespace std;

#define fr(a,b) for(i=a;i<b;i++)

typedef struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
}node;

node* newnode(int val)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* insert(node* head,int val)
{
	if(head==NULL)
	{
		return newnode(val);
	}
	else if(val<head->data)
	{
		head->left=insert(head->left,val);

	}
	else 
	{
		head->right=insert(head->right,val);
	}
	return head;

}
void inorder( node* head)
{
	if(head==NULL)return ;
	else
	{
		inorder(head->left);
		cout<<"Data is"<<head->data<<endl;
		inorder(head->right);
	}
}
node* minvalue(node* head)
{
	if(head==NULL)
	{
		return NULL;
	}
	node* temp=head;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
}
node* deletenode(node* head,int val)
{
	if(head==NULL)return NULL;
	else if(val<head->data)
	{
		head->left=deletenode(head->left,val);
	}
	else if(val>head->data)
	{

		head->right=deletenode(head->right,val);
	}
	else
	{
		if(head->left==NULL)
		{
			node* temp=head->right;
			free(head);
			return temp;
		}
		else if(head->right==NULL)
		{
			node* temp=head->left;
			free(head);
			return temp;

		}
		node* temp=minvalue(head->right);
		head->data=temp->data;

		head->right=deletenode(head->right,temp->data);
	}
	return head;
}
int main()
{
	int n;
	int a;
	cin>>n;
	int i;
	node* head=NULL;

	fr(0,n)
	{
		cin>>a;
		head=insert(head,a);
	}
	inorder(head);

	int m;
	cin>>m;
	fr(0,m)
	{
		cin>>a;
		head=deletenode(head,a);
	}
	inorder(head);

}
