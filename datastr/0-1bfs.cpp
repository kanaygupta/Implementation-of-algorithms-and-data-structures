#include<iostream>
#include<vector>
#include<algorithm>
//#include<pair>
#include<deque>
using namespace std;
vector<pair<int,int>>adj[100001];
vector<int>dist(100001,1000001);
/*
   void dfs(int start)
   {
   dist[start]=0;
   deque<int>q;
   q.push_front(start);
   int i;
   while(!q.empty())
   {
   int v=q.front();
   q.pop_front();

   for(i=0;i<adj[v].size();i++)
   {
   if(dist[adj[v][i].first]>dist[v]+adj[v][i].second)dist[adj[v][i].first]=dist[v]+adj[v][i].second;

   if(adj[v][i].second==0)
   {
   q.push_front(adj[v][i].first);
   }
   else
   {
   q.push_back(adj[v][i].first);
   }
   }
   }
   }*/
void bfs (int start)
{
	deque <int > Q;     // double ended queue
	Q.push_back( start); 
	dist[ start ] = 0;       
	while( !Q.empty ())
	{
		int v = Q.front( );
		Q.pop_front(); 
		for( int i = 0 ; i < adj[v].size(); i++)
		{
			/* if dist of neighbour of v from start node is greater than sum of distance of v from start node and edge weight between v and its neighbour (distance between v and its neighbour of v) ,then change it */
			if(dist[ adj[ v ][ i ].first ] > dist[ v ] + adj[ v ][ i ].second ) 
			{

				dist[ adj[ v ][ i ].first ] = dist[ v ] + adj[ v ][ i ].second;
				/*if edge weight between v and its neighbour is 0 then push it to front of
				  double ended queue else push it to back*/
				if(adj[ v ][ i ].second == 0)
				{
					Q.push_front( adj[ v ][ i ].first);
				}
				else
				{
					Q.push_back( adj[ v ][ i ].first);

				}
			}
		}
	}
}
	int main()
	{
		int x,y,a;
		int n;
		cin>>n;
		int m,i;
		cin>>m;
		for(i=0;i<m;i++)
		{
			cin>>x>>y>>a;
			adj[x].push_back(make_pair(y,a));
			//adj[y].push_back(make_pair(x,a));
		}
		bfs(0);
		cout<<dist[1]<<dist[2];
	}


