#include<iostream>
#include<vector>
using namespace std;
int partition(int* arr,int l, int r);
void swap(int* arr,int l,int r);
void quicksort(int* arr,int l,int r,int n)
{
	if(l>=r)return ;

	int pivot=partition(arr,l,r);

	quicksort(arr,l,pivot-1,n);

	quicksort(arr,pivot+1,r,n);
}
int partition(int* arr,int l, int r)
{
	int left=l,right=r-1,pivot=r;


	while(left<=right)
	{

		while(arr[left]<=arr[pivot]&&left<r)left++;
		while(arr[right]>arr[pivot]&&right>l)right--;

		if(left<=right)swap(arr,left,right);


	}

	swap(arr,pivot ,left);
	return left;
}
void swap(int* arr,int l,int r)
{
	int temp=arr[l];
	arr[l]=arr[r];
	arr[r]=temp;

}




int main()
{
	int n;
	cin>>n;

	int arr[100001];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];/* code */
	}
	quicksort(arr,0,n-1,n);

	for (int i = 0; i < n; ++i)
	{
	
	cout<<arr[i]<<endl;
		/* code */
	}
}
