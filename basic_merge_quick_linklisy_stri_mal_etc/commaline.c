#include<stdio.h>
int main(int count,char* arr,int** array)
{
	printf("Name of the program is %s\n",arr);
	int i;
	
	for(i=0;i<count;i++)
	{
		printf("Arguments passed are %d\n",arr[i]);
	}
	return 0;
}
