#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr=(int*)malloc(5*sizeof(int));
	int i;
	for(i=0;i<5;i++)scanf("%d",arr+i);
	for(i=0;i<5;i++)printf("%d",*(arr+i));
}
