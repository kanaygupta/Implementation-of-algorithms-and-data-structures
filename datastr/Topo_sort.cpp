

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


int t=1;
vi adj[100001];
vi arri(100001);
vector<pii> endi;
bool visited[100001];



void dfs(int v)
{
	arri[v]=t++;
	visited[v]=true;

	int i;
	int n=adj[v].size();

	fr(i,0,n)
	{
		if(visited[adj[v][i]]==false)
		{
			dfs(adj[v][i]);
		}
	}
	endi.pb(mp(t++,v));
}


int main()
{
	int n,m;
	cin>>n>>m;
	int i,a,b;
	fr(i,0,m)
	{
		cin>>a>>b;
		adj[a].pb(b);
		//adj[b].pb(a);

	}
	dfs(1);
	sort(endi.begin(),endi.end());

	fr(i,1,n+1)
	{
		cout<<"Start i s"<<arri[i]<<"and endi is "<<endl;
	}
	
	fr(i,0,endi.size())
	{
	cout<<"vert is "<<endi[endi.size()-i-1].s<<"time is "<<endi[endi.size()-1-i].f<<endl;
	}
	/*for(i=1;i<=n;i++)
	{

		if(visited[v]==false)
		{

		}
	}*/	
} 


