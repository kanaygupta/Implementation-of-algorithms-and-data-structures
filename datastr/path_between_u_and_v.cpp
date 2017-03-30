
#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
#define fr(a,b,c) for(a=b;a<c;a++)	
#define vi vector<int> 
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define f first
#define s second
int src,dest;
vi adj[100001];
vi way(100001);
bool visited[100001];

int dfs(int v)
{
	if(v==dest)
	{
		return 1;
	}
	int i;
	int count=0;
	visited[v]=true;
	int n=adj[v].size();

	fr(i,0,n)
	{
		if(visited[adj[v][i]]==false)
			{
				count+=dfs(adj[v][i]);
			}
			else
			{
				count+=way[adj[v][i]];
			}
	}
	return way[v]=count;

}
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	int u,v,a,b;
	//n>>n>>m;
	cin>>u>>v;
	dest=v;
	fr(i,0,m)
	{
		cin>>a>>b;
		adj[a].pb(b);
	}
	int ans=dfs(u);
	//ut<<dfs<<endl;
	cout<<way[u]<<endl;
} 
