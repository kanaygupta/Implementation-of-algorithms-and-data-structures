#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i=0;
	cout<<"Enter number of elements";
	cin>>n;
	int* arr[100];	
	//int* arr=(int*)malloc(*sizeof(int));
	cout<<"Enter elements";
	//int i=0;
	*arr[0]=5;
	while(*(arr[i])!=0)
	{
		arr[i]=(int*)malloc(sizeof(int));
			cin>>*(arr[i]);
	i++;
	}
	int j;
	for(j=0;j<i;j++)cout<<*(arr[j]);
	return 0;
	}
