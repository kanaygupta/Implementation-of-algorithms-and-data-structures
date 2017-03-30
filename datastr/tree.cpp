#include<iostream>
#include<algorithm>
using namespace std;
typedef struct Node
{
int data;
struct Node * left;
struct Node * right;
}node;


int arr[]={1,2,3,4,5,6};
int lc[]={1,3,-1,-1,-1,-1};
int rc[]={2,4,5,-1,-1,-1};


node* buildtree(int index)
{
node *temp;

if(index!=-1)
{

temp->data=arr[index];
temp->left=buildtree(lc[index]);
temp->right=buildtree(rc[index]);

}
return temp;
}
int main()
{

node* head=NULL;
head=buildtree(0);
}


























