#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct Node
{
	struct Node * left;
	struct Node * right;
	int data;
}node;
void insert(node** bt,int n)
{
	if(*bt==NULL)
	{
		*bt=(node*)malloc(sizeof(node));

		(*bt)->left=NULL;
		(*bt)->right=NULL;
		(*bt)->data=n;
	}
	else
	{
		if(n>(*bt)->data)insert(&(*bt)->right,n);
		else insert(&(*bt)->left,n);
	}
}
void inorder(node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<"data is"<<root->data<<endl;
		inorder(root->right);
	}
	
	return ;
}
node* findnode(node* head,int val)
{
	if(head==NULL)
	{
		return NULL;
	}
	else if(head->data==val)return head;
	else
	{
		if(val>head->data)
		{
				findnode(head->right,val);
		}
		else
		{
			findnode(head->left,val);

		}
	}
}
node* findparent(node* head,node* temp)
{
	if (head==temp)return NULL;
	else if(head->left==temp||head->right==temp)return head;
	else 
	{
		if(head->data>temp->data)return findparent(head->right,temp);
		else return findparent(head->left,temp);

	}
}
node* minvalue(node *head)
{
	node* current=node;
	while(current!=NULL&&current->left!=NULL)
	{
		current=current->left;

	}
	return current;

}


node* deletenode(node* head)
{
	if(head->left==NULL)
	{
		node* temp=head->right;
		free(head);
		return temp;

	}
	else if(root->right==NULL)
	{
		node* temp=root->left;
		free(head);
		return temp;
	}
	node* temp=minvalue(root->right);
	head->data=temp->data;
	node * temp2=findnode(temp->data);
	head->right=deletenode(temp2);
}
		
int main()
{
	int n,i;
	cout<<"enter no. of elements";
	cin>>n;
	
	vector<int>v(n);
	node* root=NULL;

	for(i=0;i<n;i++)
	{
		cin>>v[i];
		insert(&root,v[i]);
	
	
	}
	cout<<"Sorted order is";
	inorder(root);
	int m;
	cin>>m;
	for(i=0;i<m;i++)
		{
			cin>>val;
			node* temp=findnode(val);
			
			if(temp!=NULL)deletenode(temp);
			else cout<<"Element not found"<<endl;

			inorder(root);
		}	
}


