#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>adj[100001];
bool visited[100001];
int main()
{
	int nodes,edges,i,j,a,b;
	cin>>nodes>>edges;

	for(i=0;i<edges;i++)
	{
		cin>>a>>b;
		adj[b].push_back(a);
		adj[a].push_back(b);
		
	}

	for(i=1;i<=nodes;i++)
	{
		cout<<"Node is"<<i<<endl;

		for(j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	queue<int>q;

	q.push(1);

	visited[1]=true;
	cout<<"1 ";
	while(!q.empty())
	{
		int v=q.front();
		q.pop();

		for(j=0;j<adj[v].size();j++)
		{
			if(visited[adj[v][j]]==false)
			{
				q.push(adj[v][j]);
				visited[adj[v][j]]=true;
				cout<<adj[v][j]<<" ";
			}
		}
		
	}
}
			
			

