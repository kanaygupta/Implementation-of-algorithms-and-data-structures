#include<stdio.h>
int main()
{
	int data[10]={1,7,5,8,9,3,5,6,9,15};
	int* d[10];
	int i;
	for(i=0;i<10;i++)
	{
		d[i]=&data[i];

	}

	int j;
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(data[i]>data[j])
			{
				int* temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)printf("%d ",data[i]);
	printf("\n");
	for(i=0;i<10;i++)printf("%d ",*d[i]);
	return 0;
}
