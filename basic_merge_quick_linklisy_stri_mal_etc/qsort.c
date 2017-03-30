#include<stdio.h>
#include<stdlib.h>
static int cmp(const void *p1,const void* p2)
{
	if(**p1<**p2)return -1;
	else if(**p1>**p2)return 1;
	else return 0;
}
int main()
{
	int arr[8]={1,6,2,4,5,6,1,9},i;
	qsort(arr,8,4,cmp);
	for(i=0;i<8;i++)printf("%d",arr[i]);
}
