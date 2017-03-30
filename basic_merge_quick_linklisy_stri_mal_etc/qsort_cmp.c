#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b)
{
	return *((int*)a)>*((int*)b);
}
int main()
{
	int n;
	scanf("%d",&n);//cin>>n;
	int i;
	int arr[10001];

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),cmp);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
