#include<bits/stdc++.h>
using namespace std;
int v[100001];
int segtree[100001];
int size=0;
#define fr(a,b) for(i=a;i<b;i++)
void buildtree(int l,int h,int pos)
{
	if(l==h)
	{
		segtree[pos]=v[l];
		size++;
		return ;
		
	}
	int mid=(l+h)/2;
	buildtree(l,mid,2*pos+1);
	buildtree(mid+1,h,2*pos+2);
	segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];
	size++;
	return ;
}
int  query(int st,int en,int qs,int qe,int pos)
{
	if(qs<=st&&qe>=en)
	{
		return segtree[pos];
	}
	else if(qs>en||qe<st)return 0;
	else
	{
		int mid=(st+en)/2;
		return query(st,mid,qs,qe,2*pos+1)+query(mid+1,en,qs,qe,2*pos+2);
	}
}

int main()
{
	int n;
	cin>>n;
	int i;
	fr(0,n)cin>>v[i];
	buildtree(0,n-1,0);

	fr(0,size)
	{
		cout<<"segtree is"<<segtree[i]<<endl;
	}
	int q,l,r;
	cout<<"No of queries"<<endl;
	cin>>q;
	fr(0,q)
	{
		cin>>l>>r;
		cout<<"Ans is"<<query(0,n-1,l-1,r-1,0);
	}
}

