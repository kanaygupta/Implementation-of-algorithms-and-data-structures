#include<stdio.h>
int main()
{
	int arr[16]={1,2,0,7,4,2,2,0,1,3,1,4,5,2,0,1};
	int i,j=0,mo[4];
	int sum=0;
	for(i=0;i<16;i++)
	{
		sum=sum+arr[i];
		if(i%4==3)
		{
			mo[j]=sum;
			sum=0;
			j++;
		}
	}
	for(i=0;i<4;i++)printf("%d\n",mo[i]);
}
