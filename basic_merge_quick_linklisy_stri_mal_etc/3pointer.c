#include<stdio.h>
void sort(int*** d)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(**d[i]>=**d[j])
			{
				int** temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	return ;
}
int main()
{
	int i;
	int d[10]={1,5,3,55,3,2,2,4,5,6};
	int* dd[10];
	int** ddd[10];

	for(i=0;i<10;i++){
		dd[i]=&d[i];
		ddd[i]=&dd[i];
	}
	sort(ddd);
	for(i=0;i<10;i++)printf("%d ",**ddd[i]);
	return 0;

}
