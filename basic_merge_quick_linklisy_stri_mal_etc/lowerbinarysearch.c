#include<stdio.h>
int main()
{
	int n;
	printf("Program to find lower bound\n");
	printf("Enter n and array should be sorted\n");

	scanf("%d",&n);
	int i;
	int arr[100];
	
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	int q;
	scanf("%d",&q);
	int low=0,high=n-1;
	int mid,ans;
	while(low<=high)
	{
		printf("In while");
		mid=(low+high)/2;

		if(arr[mid]>=q)
		{
			high=mid-1;
			ans=mid;
		}
		else 
		{
			low=mid+1;
			
		}
	}
	printf("%d is the upper bound",ans);
}


			


