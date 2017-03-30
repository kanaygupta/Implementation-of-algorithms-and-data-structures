#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int>>>p(10001);
vector<int>parent(10001,-1);
int n,m,cost=0;
int find(int x)
{
	if(parent[x]==-1)
	{
		return x;
	}
	else
	{
		return find(parent[x]);
	}
}
void union1(int x,int y)
{
	int p1=find(x);
	int p2=find(y);
	parent[p1]=p2;
}


void mst()
{
	int i;
	for(i=0;i<m;i++)
	{
		int x=p[i].second.first;
		int y=p[i].second.second;
		if(find(x)!=find(y))
		{
			cost+=p[i].first;
			union1(x,y);
		}
	}
}

int main()
{
	int a,b,c;
	cin>>n>>m;
	int i;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		p[i]=make_pair(c,make_pair(a,b));
	}
	sort(p.begin(),p.begin()+m);
	mst();
	cout<<"Cost of minumum spanning tree is"<<cost;
}

