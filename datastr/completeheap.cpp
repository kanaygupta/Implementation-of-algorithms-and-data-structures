#include<iostream>
#include<vector>
using namespace std;
void swap(int* arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void heapify(int* arr,int n,int largest)
{
	int i=largest;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&arr[left]<arr[largest])
	{
		largest=left;
	}
	if(right<n&&arr[right]<arr[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		swap(arr,i,largest);
		heapify(arr,n,largest);
	}

}
void insertheap(int* arr ,int i)
{

	int j;
	for(j=i/2-1;j>=0;j--)
	{
		heapify(arr,i,j);
	}
}
int main()
{
	int n,i,j;
	cin>>n;
	int arr[100001];

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		insertheap(arr,i+1);
		for(j=0;j<=i;j++)
		{
			cout<<arr[j];
		}
		cout<<endl;
	}

	//insertheap(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}


