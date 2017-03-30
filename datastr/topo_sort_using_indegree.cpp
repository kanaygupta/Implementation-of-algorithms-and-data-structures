
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
int n;
vi v;
vi indegree(10001);
vi adj[100001];

void topo()
{
	int i,j;
	queue<int> q;

	fr(i,1,n+1)
	{
		if(indegree[i]==0)
		{
			q.push(i);
			v.pb(i);
		}
	}
	while(!q.empty())
	{
		
		int a=q.front();
		q.pop();
		fr(i,0,adj[a].size())
		{
			indegree[adj[a][i]]--;
			if(indegree[adj[a][i]]==0)
			{
				q.push(adj[a][i]);
				v.pb(adj[a][i]);
			}
		}
	}

}
int main()
{
	int m;
	cin>>n>>m;
	int i;
	int a,b;
	fr(i,0,m)
	{
		cin>>a>>b;
		adj[a].pb(b);
		indegree[b]++;
	}
	topo();
	fr(i,0,v.size())
	{
		cout<<"vert is"<<v[i]<<endl;
	}

} 
