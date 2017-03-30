#include<stdio.h>
int main()
{
	int data[10]={1,7,5,8,9,3,5,6,9,15};
	int* d[10];
	int** dd[10];
	int i;
	for(i=0;i<10;i++)
	{
		d[i]=&data[i];
		dd[i]=&d[i];

	}

	int j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(**dd[i]>**dd[j])
			{
				int* temp=*dd[i];
				*dd[i]=*dd[j];
				*dd[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)printf("%d\n",data[i]);
	for(i=0;i<10;i++)printf("%d\n",*d[i]);
	return 0;
}
