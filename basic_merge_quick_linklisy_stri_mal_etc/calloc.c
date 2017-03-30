#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr=malloc(8*sizeof(int));
	int i;
	for (i=0;i<100;i++)printf("%d",arr[i]);
	free(arr);

}
