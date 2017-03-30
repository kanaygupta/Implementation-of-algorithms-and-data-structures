#include<stdio.h>

void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
//	return ;
	printf("after swap is %d%d \n",*a,*b);
	return ;
}





int main()
{
	int a=10;
	int b=20;
	swap(&a,&b);
	printf("after swap %d%d",a,b);

}
