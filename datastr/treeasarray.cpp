#include<iostream>
#include<array>
#include<vector>
using namespace std;
typedef struct Node
{
	struct Node* left;
	int data;
	struct Node* right;
}node;
int arr[]={1,2,3,4,5,6,7,0,0,8};
int lc[]={1,3,5,-1,9,-1,-1,-1,-1,-1};
int rc[]={2,4,6,-1,-1,-1,-1,-1,-1,-1};

node* buildtree(int index)
{
	node* temp=NULL;

	if(index!=-1)
	{
		temp=(node*)malloc(sizeof(node));
		temp->left=buildtree(lc[index]);
		temp->right=buildtree(rc[index]);
		temp->data=arr[index];
	}
	return temp;
}

void inorder(node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("DATA IS %d",root->data);
		inorder(root->right);
	}
}
int main()
{
node* root;
root=buildtree(0);
inorder(root);



}




