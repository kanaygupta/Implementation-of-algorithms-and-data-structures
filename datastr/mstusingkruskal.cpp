ubinclude<bits/stdc++.h>
using namespace std;
vector<int>parent(100001,-1);
int n,m;
vector<pair<int,pair<int,int>>>p(10001);
int cost=0;
int find(int v)
{
	if(parent[v]==-1)
	{
		return v;
	}
	else
	{
		return find(parent[v]);
	}
}
void union2(int x,int y)
{
	int p1=find(x);
	int p2=find(y);
	parent[p1]=p2;
}

void mst()
{
	int i,x,y;
	for(i=0;i<m;i++)
	{
		x=p[i].second.first;
		y=p[i].second.second;
		//cout<<"In mst"<<endl;
		//cout<<find(x)<<" "<<find(y)<<endl;
		if(find(x)!=find(y))
		{
			cout<<x<<y<<p[i].first<<endl;
			cost+=p[i].first;
			union2(x,y);

		}
	}
}

int main()
{
	//int n,m;
	int a,b,c,i;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		p[i]=make_pair(c,make_pair(a,b));
	}
	sort(p.begin(),p.begin()+m);

	mst();
}

