#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int> >adj[100001];
	vector<set<int>>myset;
	vector<int>edge;
	int n,m;
	cin>>n>>m;
	int i,a,b,c;
	map<int,pair<int,int>>mp;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
		edge.push_back(c);
		mp[c]=make_pair(a,b);
	}
	sort(edge.begin(),edge.end());

	for(i=0;i<edge.size();i++)
	{
		for(j=0;j<myset.size())
		{
			if(myset.find(mp[edge[i]].first)!=myset.end()&&myset.find(mp[edge[i]].second)!=myset.end())break;
			else if(myset.find(mp[edge[i]].first)!=myset.end()||myset.find(mp[edge[i]].second)!=myset.end())	{
				cout<<"Included edge of length"<<edge[i]<<" with vertices "<<mp[edge[i]].first<<mp[edge[i]].second<<endl;
				if(myset[j].find(mp[edge[i]].first)!=myset[j].end())myset[j].insert(mp[edge[i]].first);
				else if(myset[j].find(mp[edge[i]].second)==myset[j].end())myset[j].insert(mp[edge[i]].second);
			}
		}
	}



