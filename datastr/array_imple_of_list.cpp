#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int  n;
	cin>>n;
	int  i,head,a;
	int prev[10001];

	
	head=-1
	
	for(i=1;i<n;i++)
	{
		cin>>a;
		prev[a]=head;
		head=a;
	}
	
	cout<<"the list is "<<endl;

	while(head!=-1)
	{
		a=head;
		cout<<"data is"<<a<<endl;
		head=prev[head];
	}
}