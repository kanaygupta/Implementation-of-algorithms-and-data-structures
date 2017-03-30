#include<bits/stdc++.h>
using namespace std;
#define mii map<int,int>
#define fr(a,b) for(i=a;i<b;i++)
set<int>vert;

mii lefti;
mii righti;
void inorder(int v)
{
	if(v==0)return ;
	else
	{
		inorder(lefti[v]);
		cout<<"Data is"<<v<<endl;
		inorder(righti[v]);

	}
}

int main()
{
	int n,v,i;
	cin>>n;

	//set<int>vert;

	//mii left;
	//mii right;
	int start;
	cin>>v;
	vert.insert(v);
	start=v;
	fr(1,n)
	{
		cin>>v;

		auto it =vert.upper_bound(v);

		if(it!=vert.end()&&lefti[*it]==0)
		{
			lefti[*it]=v;
			//cout<<*it<<endl;
		}
		else
		{
			it--;
			righti[*it]=v;
			//cout<<*it<<endl;
		}
		vert.insert(v);
	}
	inorder(start);

}


