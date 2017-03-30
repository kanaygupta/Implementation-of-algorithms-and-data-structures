#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fr(a,b) for(i=a;i<b;i++)
#define f first
#define s second
#define pi pair<int,int>
#define lli long long int
vector<pi>adj[10001];
vector<int >dist(10001,10001);
bool visited[100001];

void kruskal(int v)
{
	dist[v]=0;
	memset(visited,false,sizeof(visited));
	int i; 
	multiset<pi> mse;

	mse.insert(mp(0,v));
	while(!mse.empty())
	{
		auto it=mse.begin();
		int a=it->s;

		for(i=0;i<adj[a].size();i++)
		{
			int w=adj[a][i].s;
			int e=adj[a][i].f;
			if(dist[a]+w<dist[e])
			{
				dist[e]=dist[a]+w;
				mse.insert(mp(dist[e],e));
			}
		
		}
		visited[a]=true;
		mse.erase(mse.begin());

	}

}
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	int a,b,c;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		adj[a].push_back(mp(b,c));
		adj[b].pb(mp(a,c));
	}
	kruskal(1);
	fr(1,n+1)cout<<"Distance is"<<dist[i]<<endl;
}
