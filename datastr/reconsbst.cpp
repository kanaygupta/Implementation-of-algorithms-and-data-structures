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

int in[100],pre[100],x;

void inorder(node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);

		cout<<"data is"<<root->data;

		in[x++]=root->data;

		inorder(root->right);
	}
	return ;
}
void preorder(node* root)
{
	if(root!=NULL)
	{
	

		cout<<"data is"<<root->data;

		pre[x++]=root->data;

		preorder(root->left);
		preorder(root->right);
	}
	return ;
}
node* recons(int* inord,int* preord,int nodes)
{
	node* temp,*left,*right;
	int tempin[100],temppre[100],i,j;
	
	temp=(node*)malloc(sizeof(node));
	temp->left=NULL;
	temp->data=preord[0];
	temp->right=NULL;

	if(nodes==1)return temp;

	for(i=0;inord[i]!=preord[0];)i++;


	if(i>0)
	{
		for(j=0;j<=i;j++)
		{
			tempin[j]=inord[j];
			if(j!=i)temppre[j]=preord[j+1];
		}
	}
	left=recons(tempin, temppre,i);
	temp->left=left;
	
	if(i<nodes-1)
	{

		for(j=i;j<nodes-1;j++)
		{
			tempin[j-i]=inord[j+1];
			temppre[j-i]=preord[j+1];
		}
	}
	
	//right=recons(tempin,temppre,nodes-i-1);
	temp->right=right;
	
	return temp;
}



//int in[100],pre[100],x;

int main()
{
	int n,i;
	cout<<"enetr no.of elemts";
	cin>>n;

	vector<int>v(n);
	node* root=NULL;

	for(i=0;i<n;i++)
	{
		cin>>v[i];
		insert(&root,v[i]);


	}
	x=0;

	inorder(root);

	x=0;

	preorder(root);

	root=recons(in,pre,n);
	/*x=0;
	inorder(root);
	*/
}



