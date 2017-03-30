#include<stdio.h>

void swap(int *ar, int i, int j)
{
	int tmp = ar[i];
	ar[i] = ar[j];
	ar[j] = tmp;
	return;
}

int partition(int *ar, int s, int e)
{
	int v = ar[s];
	int i = s-1, j = e+1;
	while(1)
	{
		do {
			i = i+1;
		} while(ar[i] < v);

		do {
			j = j-1;
		} while(ar[j] > v);

		if(i>=j)
			return j ;

		swap(ar,i,j);
	}
}

void qsort(int *ar, int s, int e)
{
	if(s>=e)
		return;
	int p = partition(ar,s,e);
	int i; 
	for(i=0;i<7;i++)
		 printf("%d ",ar[i]);
	printf("\n");
	qsort(ar,s,p);
	qsort(ar,p+1,e);
	return;
}


int main()
{
	int n;
	scanf("%d",&n);
	int i,ar[100];
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);

	qsort(ar,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("\n");

	return 0;
}

