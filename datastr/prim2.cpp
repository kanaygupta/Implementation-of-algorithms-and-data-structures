#include<bits/stdc++.h>
using namespace std;
int cost=0;
int n,m;
typedef pair<int,int> ii;
vector<ii>adj[100001];
bool visited[10001]={false};

void primmst(int v)
{
	priority_queue<ii,vector<ii>,greater<ii>>pq;
	pq.push(make_pair(v,0));
	int i;
	while(!pq.empty())
	{
		ii temp=pq.top();
		int x=temp.first;
		pq.pop();
		if(visited[x]==true)
		{
			continue;
		}
		else
		{
			visited[x]=true;
			cost+=temp.second;
			cout<<"Included"<<x<<"cost is"<<temp.second<<endl;
			for(i=0;i<adj[x].size();i++)
			{
				if(visited[adj[x][i].first]==false)
				{
					pq.push(adj[x][i]);

				}
			}


		}
	}


}

int main()
{
	cin>>n>>m;
	int i,a,b,c;
		for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));

	}
	primmst(1);
	cout<<"minimum cost is"<<cost<<endl;

}
