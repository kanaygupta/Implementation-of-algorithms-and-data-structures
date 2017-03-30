#include<stdio.h>
int arr[100001];
void swap(int l,int r);
int partition(int l, int r)
{
	int left=l,right=r-1,pivot=r;


	while(left<=right)
	{

		while(arr[left]<=arr[pivot]&&left<r)left++;
		while(arr[right]>arr[pivot]&&right>l)right--;

		if(left<=right)swap(left,right);


	}

	swap(pivot ,left);
	return left;
}
void swap(int l,int r)
{
	int temp=arr[l];
	arr[l]=arr[r];
	arr[r]=temp;
}

void qsort(int l,int r,int k)
{
	if(l>=r)return ;


	int pos=partition(l,r);
	printf("l is %d pos is %d and k is %d\n",l,pos,k);

	if(pos-l==k-1)
	{
		printf("Lement foud %d\n",arr[k-1]);//<<endl;
	}
	else if(pos-l>k-1)
	{
		qsort(l,pos-1,k);
	}
	else
	{
		qsort(pos+1,r,k);

	}
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);

	//cin>>n>>k;
	int i;
	for(i=0;i<n;i++)scanf("%d",&arr[i]);//cin>>arr[i];

	qsort(0,n-1,k);
}

