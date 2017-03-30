#include<iostream>
using namespace std;

template< class t>
void swap1(t&a,t&b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}
void fun(int m,int n)
{
	swap1(m,n);
	cout<<m<<n;
}
int main()
{
	int m=5;
	int n=6;
	
	fun(m,n);
	cout<<"values after swapping are"<<m<<n;
	
}
