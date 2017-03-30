#include<stdio.h>
int main()
{
	int arr[1000]={0};
	int i,j;

	for(i=2;i<40;i++)
	{
		if(arr[i]==0){
		for(j=2;j<=1000/i;j++)
		{
			arr[i*j]=1;
		}
	}
	}

	for(i=2;i<1000;i++)if(arr[i]==0)printf("%d\n",i);
}
