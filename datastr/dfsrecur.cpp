#include<iostream>
#include<vector>
using namespace std;
bool visited[1000001];
vector<int> adj[1000001];
void dfs(int s)
{
	visited[s]=true;
	int i;
	for(i=0;i<adj[s].size();i++)
	{
		if(visited[adj[s][i]]==false)
			dfs(adj[s][i]);
	}
}
		
int main()
{
	int nodes,edges,i,j,a,b;
	cin>>nodes>>edges;
	int compo=0;
	for(i=0;i<edges;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(i=1;i<=nodes;i++)
	{
		cout<<"Node is"<<i<<" ";

		for(j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<" ";
		}
	}
	for(i=1;i<=nodes;i++)
	{
		if(visited[i]==false)
		{
			dfs(i);
			compo++;
		}
	}
	cout<<"Connected compo are "<<compo;
}

