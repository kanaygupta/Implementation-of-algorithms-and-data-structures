#include<iostream>
#include<vector>
using namespace std;
vector<int>adj[10];
int main()
{
	int x,y,nodes,edges,i,j;
	cin>>nodes>>edges;
	
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);//for directed and undirected both;
		//adj[y].push_back(x);//for undirected only
	}

	for(i=1;i<=nodes;i++)
	{

		cout<<"List  of "<<i<<"is";

		for(j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}

	


