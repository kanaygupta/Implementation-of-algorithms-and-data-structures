#include<stdio.h>
#include<stdlib.h>
int arr[1000001];
int size=0;
void insert(int x)
{
	arr[size++]=x;
	int parent;
	int i=size-1;	
	parent=(i-1)/2;


	while(i!=0&&arr[parent]<arr[i])
	{
		int temp=arr[i];
		arr[i]=arr[parent];
		arr[parent]=temp;
		i=parent;
		parent=(i-1)/2;		
	
	}
}
void heapify(int left,int right);
void delete1()
{
	int i=size-1;
	int temp=arr[i];
	arr[i]=arr[0];
	arr[0]=temp;
	size--;
	heapify(0,size);

}
void heapify(int left,int right)
{
	printf("in heapify");
	int i=left;
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<right&&arr[l]>arr[i])
	{
		i=l;
	}
	if(r<right&&arr[r]>arr[i])
	{
		i=r;
	}

	if(i!=left)
	{
		int temp=arr[i];
		arr[i]=arr[left];
		arr[left]=temp;
		heapify(i,right);
	}


}


		
int main()
{
	int n;
	scanf("%d",&n);
	int i,x,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		//cin>>x;
		insert(x);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("largest element is %d",arr[0]);
		delete1();
		for(j=0;j<size;j++)
		{
			printf("%d\n",arr[j]);
		}
	}
	/*for(i=0;i<n;i++)
	{
		cin>>x;
		deleteelement(x);

	}*/
	

}
