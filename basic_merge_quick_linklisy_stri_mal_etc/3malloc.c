#include<stdio.h>
#include<stdlib.h>
int main()
{
	int * arr[100];
	int i=0,j;
	while(1)
	{
		arr[i]=(int*)malloc(sizeof(int));
		scanf("%d",arr[i]);
	//	if(*arr[i]==0)break;
		i++;
	}
	for(j=0;j<i;j++)printf("%d",*arr[j]);
}
