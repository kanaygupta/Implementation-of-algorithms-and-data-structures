#include<stdio.h>
int arr[100001];

int temp[100001];
void merge(int l,int r);
void mergesort(int l,int r)
{
	if(l>=r)return ;
	
	int mid=(l+r)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	merge(l,r);
}
void merge(int l,int r)
{
	int low=l,i;
	int mid=(l+r)/2;
	int right=mid+1;
	int size=0;
	while(low<=mid&&right<=r)
	{
		if(arr[low]<arr[right])
		
		{
			temp[size++]=arr[low++];
		}

		else 
		{
			temp[size++]=arr[right++];
		}
	}

	while(low<=mid)temp[size++]=arr[low++];
	while(right<=r)temp[size++]=arr[right++];

	for(i=l;i<=r;i++)
	{
		arr[i]=temp[i-l];
	}
}


int main()
{
	int n;
	scanf("%d",&n);//cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		//cin>>arr[i];
	}
	mergesort(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
