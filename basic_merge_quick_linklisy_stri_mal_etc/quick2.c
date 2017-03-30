#include<stdio.h>
int parti(int* arr,int l,int r)
{
	int low=l,high=r-1,pivot=r;
	r--;
	printf("In parti\n");

	while(l<=r)
	{
		while(arr[l]<=arr[pivot]&&l<=high){printf("In lowloop\n");l++;}
		while(arr[r]>arr[pivot]&&r>low){printf("In high loop\n");r--;}

		if(l<=r)
		{
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
		printf("At end of while\n");
	}
	printf("AT end of parti\n");

	int temp=arr[pivot];
	arr[pivot]=arr[l];
	arr[l]=temp;
	return l;
}
void quicksort(int* arr,int l,int r,int k)
{
	if(l>=r)return ;
	printf("In quick\n");	
	int pivot=parti(arr,l,r);
	if(quicksort(arr,l,pivot-1);
	quicksort(arr,pivot+1,r);
	return ;
}
int main()
{
	int arr[9]={1,94,6,2,78,43,98,0,4};
//int arr[9]={1,6,2,4,5,6,2,8,9};	
	int pos;
	scanf("%d",&pos);

	quicksort(arr,0,8,pos);
	int i;
	for(i=0;i<9;i++)printf("%d  ",arr[i]);
}
