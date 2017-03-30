#include<stdio.h>
int parti(int* arr,int l,int r);
void qsort(int* arr,int l,int r)
{
	//printf("in quick\n");	
	if(l>=r)return ;
	int pivot=parti(arr,l,r);
	int i;
	for(i=0;i<9;i++)printf("%d",arr[i]);
	printf("\n");

	qsort(arr,l,pivot-1);
	qsort(arr,pivot+1,r);

	return ;
}
int parti(int* arr,int l,int r)
{
	int pivot=r, low=l, hi=r-1;
	r--;

	//printf("IN parti");
	while(l<=r)
	{
		while(arr[l]<=arr[pivot]&&l<=hi)l++;
		while(arr[r]>arr[pivot]&&r>low)r--;

		if(l<=r)
		{
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
	}

	int temp=arr[l];
	arr[l]=arr[pivot];
	arr[pivot]=temp;

	return l;
}
int main()
{
	int i;
	int arr[9]={1,6,9,2,4,3,8,7,5};
	for(i=0;i<9;i++)printf("%d",arr[i]);
	printf("\n");
	qsort(arr,0,8);
	
	for(i=0;i<9;i++)printf("%d",arr[i]);
}
