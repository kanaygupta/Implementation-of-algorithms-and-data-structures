#include<iostream>
#include<vector>
using namespace std;
vector<int>v[1000001];
int main()
{
	int nodes,edges;
	int i,j,a,b;
	cin>>nodes>>edges;
	for(i=0;i<edges;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(i=1;i<=nodes;i++)
	{
		cout<<"Node is "<<i<<endl;
		for(j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}