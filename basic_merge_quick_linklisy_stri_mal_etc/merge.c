#include<stdio.h>
void merge(int* arr,int l1,int r1,int l2,int r2,int* ans)
{
	int temp[100];
	int j=0;
	int c=l1;
	while(l1<=r1&&l2<=r2)
	{
		if(arr[l1]<arr[l2])
		{
			(*ans)++;

			temp[j++]=arr[l1];
			l1++;
		}
		else
		{
			temp[j++]=arr[l2];
			l2++;
		}
	}
	while(l1<=r1)temp[j++]=arr[l1++];
	while(l2<=r2)temp[j++]=arr[l2++];

int i;	
	for(i=0;i<j;i++)
	{
		arr[i+c]=temp[i];
	}
	return ;
}


void mergesort(int*arr,int l,int r,int * ans)
{
	if(l>=r)return ;
	int mid=(l+r)/2;

	mergesort(arr,l,mid,ans);
	mergesort(arr,mid+1,r,ans);
	merge(arr,l,mid,mid+1,r,ans);
	return ;
}



int main()
{	int ans;
	int arr[10]={1,4,2,3,4,5,45,23,56,76};
	mergesort(arr,0,9,&ans);
	int i;
	for(i=0;i<10;i++)printf("%d ",arr[i]);
	printf("%d",ans);
}
