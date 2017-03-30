#include<iostream>
#include<vector>
using namespace std;
int size=0;
int arr[10001];
void insert(int x)
{
	arr[size++]=x;
	int i=size-1;	
	while(i!=0&&arr[(i-1)/2]>arr[i])
	{
		int temp=arr[i];
		arr[i]=arr[(i-1)/2];
		arr[(i-1)/2]=temp;
		i=(i-1)/2;
	}

	
}
void display()
{
	int i=0;
	for(i=0;i<size;i++)
		cout<<arr[i]<<endl;
}

int main()
{
	int n,i,x,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
		display();
	}
	cout<<"Elements inserted";
	cin>>q;
	for(i=0;i<q;i++)
	{
		//deletefirst();
		//
	}
}
