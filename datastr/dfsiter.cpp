#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
vector<int>adj[100001];

int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	int i,j,a,b;
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
		cout<<endl;
	}
	int v;
	stack<int>s;
	bool visited[100001]={false};
	//for(i=0;i<nodes;i++)cout<<visited[i]<<endl;
	s.push(1);
	visited[1]=true;
	cout<<"Recursive dfs "<<endl;
	
	int count=0;
	
	while(!s.empty())	
	{
		//cout<<"top is"<<s.top()<<endl;
		v=s.top();
		s.pop();

		for(i=0;i<adj[v].size();i++)
		{
			if(visited[adj[v][i]]==false)
			{
				s.push(adj[v][i]);
				cout<<adj[v][i]<<" ";
				visited[adj[v][i]]=true;
				//visited[adj[i][v]]=true;
			}
		}
	}



}
