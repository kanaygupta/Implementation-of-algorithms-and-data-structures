#include<iostream>
#include<vector>
using namespace std;
void merge(int * arr,int l,int r);
void mergesort(int* arr ,int l,int r,int n)
{

	if(l>=r)return ;
	int mid=(l+r)/2;

	mergesort(arr ,l, mid,n);

	mergesort(arr,mid+1,r,n);

	merge(arr,l,r);

	return ;
}
void merge(int * arr,int l,int r)
{
	int mid=(l+r)/2;
	int temp[100001];
	int left=l;
	int right=mid+1;
	int j=0,i;
	while(left<=mid&&right<=r)
	{

		if(arr[left]<arr[right])
		{
			temp[j++]=arr[left++];
		}
		else 
		{
			temp[j++]=arr[right++];
		}
	}

	while(left<=mid)
		temp[j++]=arr[left++];
	while(right<=r)
		temp[j++]=arr[right++];

	for(i=l;i<=r;i++)
	{
		arr[i]=temp[i-l];
	}
	return ;


}
int main()
{
	int n;
	cin>>n;

	int i;
	int arr[100001];

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	mergesort(arr,0,n-1,n);

	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
