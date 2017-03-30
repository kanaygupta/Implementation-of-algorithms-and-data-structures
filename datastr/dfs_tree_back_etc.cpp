#include<bits/stdc++.h>
using namespace std;
//1 for white
//2 for grey
//3 for balck
#define fr(a,b) for(i=a;i<b;i++)
vector<int>visited(1000001,1);
vector<int>adj[100001];
vector<int>parent(100001,0);
void graph(int v)
{
	visited[v]=2;
	int i;
	for(i=0;i<adj[v].size();i++)
	{
		if(visited[adj[v][i]]==1)
		{
			cout<<"TRee edge "<<v<<adj[v][i]<<endl;
			parent[adj[v][i]]=v;
			graph(adj[v][i]);

		}
		else if(visited[adj[v][i]]==2)
		{
			if(adj[v][i]==parent[v])
			{
				cout<<"Bidirectional"<<endl;
			}
			else
			{
				cout<<"Back edge"<<v<<" "<<adj[v][i]<<endl;
			}

		}
		else if(visited[adj[v][i]]==3)
		{
			cout<<"Forward egde"<<v<<" "<<adj[v][i]<<endl;
		}
	}

	visited[v]=3;
	return ;
}
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	int i;
	fr(0,m)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);

	}
	graph(1);
}