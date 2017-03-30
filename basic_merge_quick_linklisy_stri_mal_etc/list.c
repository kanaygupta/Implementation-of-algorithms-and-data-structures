#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,arr[100];

	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	
	int max=0;
	int ans=0;
	int prev;
	for(i=0;i<n;i++)
	{
		int count=1;
		prev=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>=arr[i]&&arr[j]>=arr[prev])
			{
				prev=j;
				count++;	
			}
		}
		if(count>ans)ans=count;
	}
	printf("%d",ans);
}
