#include<iostream>
using namespace std;

void merge(int * arr,int l1,int r1,int l2,int r2,int* ans)
{
	int temp[100];
	int j=0,i;
	int c=l1;

	while(l1<=r1&&l2<=r2)
	{
		if(arr[l1]<arr[l2])
		{
			
			temp[j++]=arr[l1++];
		}
		else
		{
			(*ans)++;
			temp[j++]=arr[l2++];
		}
	}

	while(l1<=r1)temp[j++]=arr[l1++];
	while(l2<=r2)temp[j++]=arr[l2++];
	

	for(i=0;i<j;i++)
	{
		arr[c+i]=temp[i];
	}
	return ;
}






void mergesort(int* arr ,int l,int r,int * ans)
{
	if(l>=r)return ;
	int mid=(l+r)/2;

	mergesort(arr,l,mid,ans);
	mergesort(arr,mid+1,r,ans);
	merge(arr,l,mid,mid+1,r,ans);
	return ;
}
int main()
{
	int arr[100];
	int n;
	cin>>n;
	int ans=0;
	int i;
	for(i=0;i<n;i++)
	{
	 cin>>arr[i];
	 

	 lokind MR Table
	mergesort(arr,0,n-1,&ans);
	//for(i=0;i<n;i++)
	//{
	//	cout<<arr[i]<<"\n";
	//}
	cout<<ans;
}
