#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int ps[100];ps[0]=arr[0];
	for(int i=1;i<5;i++)
	{
		ps[i]=ps[i-1]+arr[i];
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",ps[i]);
	}
}
