#include<stdio.h>
#include<stdlib.h>
int main()

{
int* arr=malloc(5*sizeof(int));
arr[1]=1;
arr[2]=2;
int i;
for(i=0;i<5;i++)printf("%d",arr[i]);
return 0;

}
