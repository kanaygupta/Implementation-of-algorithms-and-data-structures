#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
	struct Node* left;
	struct Node* right;
	int data;
}node;


#define fr(a,b) for(i=a;i<b;i++)
#define vi vector<int>
void inorder(node* head)
{
	if(head==NULL)
	{
		return ;
	}
	inorder(head->left);
	cout<<"Data is"<<head->data<<endl;
	inorder(head->right);
}



int main()
{
	int n;
	cin>>n;
	int i;
	vi v(n+1);
	
	node* head=NULL;

	fr(1,n+1)
	{
		cin>>v[i];
		if(head==NULL)
		{
			head=(node*)malloc(sizeof(node));
			head->left=NULL;
			head->right=NULL;
			head->data=v[i];
		}
		else
		{
			node* temp=head;
			node* prev=NULL;

			while(temp!=NULL)
			{
				prev=temp;
				if(v[i]<=temp->data)
				{
					temp=temp->left;
				}
				else temp=temp->right;
			}
			temp=(node*)malloc(sizeof(node));
			temp->left=NULL;
			temp->right=NULL;
			temp->data=v[i];
			if(v[i]<=prev->data)
			{
				prev->left=temp;
			}
			else 
			{
				prev->right=temp;
			}
		}
	}
	inorder(head);
}
			


