#include <bits/stdc++.h>
using namespace std;
vector<int> prev1(100001,-1);

vector<int> arr(100001,-1);

void initilaise()
{		//memset(&prev1[0],10001,-1);
//memset(&arr[0],10001,-1);

}
void insert(int a,int b)
{
	prev1[b]=arr[a];
		arr[a]=b;
}
void print(int a)
{
int v=arr[a];
cout<<"v is"<<v<<endl;
while(prev1[v]!=-1)
{
	v=prev1[v];
	cout<<"v"<<v<<endl;
}
}
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	int i;
	initilaise();
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		insert(a,b);
	}
	print(1);

}