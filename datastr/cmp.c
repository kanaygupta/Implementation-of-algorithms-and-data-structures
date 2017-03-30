#include<stdio.h>

int A[]={3,2,1,4,5,6};
int B[]={2,3,4,1,5,6};
int compare(int n){
	//returns 1 if A < B, -1 if A > B, 0 if A == B.
	//A,B : topological sortings.
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(A[j] == i && B[j] == i)break;
			else if(A[j] == i)return 1;
			else if(B[j] == i)return -1;
	return 0;
}
int main()
{
	printf("%d",compare(6));
}

