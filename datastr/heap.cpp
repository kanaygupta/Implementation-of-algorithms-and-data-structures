#include<iostream>
#include<vector>
using namespace std;

void heapify(int* arr,int n,int i)
{
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

		int largest=i;
		int left=2*i+1;
		int right=2*i+2;

		
			if(left<n&&arr[left]>arr[largest])
				largest=left;
			if(right<n&&arr[right]>arr[largest])
				largest=right;
		
		if(largest!=i)
		{
			int temp=arr[i];
			arr[i]=arr[largest];
			arr[largest]=temp;
			heapify(arr,n,largest);
		}
}/*
void heapify(int arr[], int n, int i)
{
        int largest = i;  // Initialize largest as root
        int l = 2*i + 1;  // left = 2*i + 1
        int r = 2*i + 2;  // right = 2*i + 2

        // If left child is larger than root
        if (l < n && arr[l] > arr[largest])
                largest = l;

        // If right child is larger than largest so far
        if (r < n && arr[r] > arr[largest])
                largest = r;

        // If largest is not root
        if (largest != i)
        {
                swap(arr[i], arr[largest]);

                // Recursively heapify the affected sub-tree
                heapify(arr, n, largest);
        }
}*/


void heapsort(int* arr,int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		
		cout<<"data is"<<arr[0]<<endl;
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		//cout<<"data is"<<arr[0]<<endl;
		heapify(arr,i,0);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[100001];

	int i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	heapsort(arr,n);

	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}







