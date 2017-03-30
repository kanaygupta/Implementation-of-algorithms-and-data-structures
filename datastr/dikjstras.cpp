#include<bits/stdc++.h>
using namespace std;
#define fr(a,b)  for(i=a;i<b;i++)	
#define pii pair<int,int>
#define lli long long int
#define mkp make_pair
#define f first
#define s second
vector<pii>adj[100001];
bool visited[100001];
vector<int>dist(100001,100001);
void kruskal(int v)
{
	memset(visited,false,sizeof(visited));
	
	dist[v]=0;
	multiset<pair<int,int>>mse;
	mse.insert(mkp(0,v));
	int i;
	while(!mse.empty())
	{
		auto it=mse.begin();
		if(visited[it->s]!=true)
		{
			for(i=0;i<adj[it->s].size();i++)
			{
				int w=adj[it->s][i].s;
				int e=adj[it->s][i].f;

				if(visited[e]==false&&	dist[it->s]+w<dist[e])
					{
						dist[e]=dist[it->s]+w;
						mse.insert(mkp(dist[e],e));

					}
			}
			visited[it->s]=true;
		}
		mse.erase(it);

	}
}
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int i;
	int a,b,c;
	fr(0,m)
	{
		cin>>a>>b>>c;
		adj[a].push_back(mkp(b,c));
		adj[b].push_back(mkp(a,c));

	}

	kruskal(1);
	for(i=2;i<=n;i++)
	{
		cout<<dist[i]<<" "; 
	}
}




