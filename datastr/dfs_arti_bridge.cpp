#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100001];
bool visited[1000001];
vector<int>low(100001);
vector<int>start(100001);
vector<int>parent(100001);
vector<int>art(100001);

int root;
int timei=0;
int childroot=0;
#define fr(a,b) for(i=a;i<b;i++)

void graph(int v)
{
	visited[v]=true;
	int i;
	start[v]=low[v]=timei++;

	for(i=0;i<adj[v].size();i++)
	{
		if(visited[adj[v][i]]==false)
		{
			parent[adj[v][i]]=v;
			graph(adj[v][i]);

			if(root==v)
				childroot++;
			if(low[adj[v][i]]>=start[v])
			{
				art[v]=true;
			}

			if(low[adj[v][i]]>start[v])
			{
				cout<<"Bridge between"<<v<<" "<<adj[v][i]<<endl;
			}

			low[v]=min(low[v],low[adj[v][i]]);

		}
		else if(adj[v][i]!=parent[v])
		{

			low[v]=min(low[v],start[adj[v][i]]);
		}
	}
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
	root=1;
	graph(1);

	for(i=1;i<=n;i++)
	{
		cout<<"Start "<<start[i]<<" low"<<low[i]<<endl;
		if(art[i]==true)
		{
			cout<<i<<"is articulation"<<endl;
		}
	}

}