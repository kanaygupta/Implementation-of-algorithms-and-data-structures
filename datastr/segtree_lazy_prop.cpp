#include<bits/stdc++.h>
using namespace std;
#define fr(a,b) for(i=a;i<b;i++)
#define vi vector<int>
int size=0;
vi segtree(500001);
vi lazy(500001);
vi v(100001);
void buildtree(int l,int r,int pos)
{
	if(l==r)
		{
			segtree[pos]=v[l];
			size++;		
		return ;
	}

	int mid=(l+r)/2;
	buildtree(l,mid,2*pos+1);
	buildtree(mid+1,r,2*pos+2);
	size++;
	segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];

}
void printsegtree()
{
	int i;
	fr(0,size)
	{
		cout<<"Segtree element is"<<segtree[i]<<endl;
	}
}
void update(int l,int r,int ul,int ur,int val,int pos)
{
	if(lazy[pos]!=0)
	{
		segtree[pos]+=(r-l+1)*lazy[pos];
		if(l!=r)
		{
			lazy[2*pos+1]+=lazy[pos];
			lazy[2*pos+2]+=lazy[pos];
		}
		lazy[pos]=0;
	}

	if(ul>r||l>ur)return ;

	if(ul<=l&&r<=ur)
	{

		segtree[pos]+=(r-l+1)*val;

		if(l!=r)
		{
			lazy[2*pos+1]+=val;
			lazy[2*pos+2]+=val;
		}
		return ;

	}

	int mid=(l+r)/2;
	update(l,mid,ul,ur,val,2*pos+1);
	update(mid+1,r,ul,ur,val,2*pos+2);
	segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];

}
int  query(int l,int r,int ql,int qr,int pos)
{
	if(lazy[pos]!=0)
	{
		segtree[pos]+=(r-l+1)*lazy[pos];
		if(l!=r)
		{
			lazy[2*pos+1]+=lazy[pos];
			lazy[2*pos+2]+=lazy[pos];

		}
		lazy[pos]=0;
	}

	if(ql>r||qr<l)return 0;
	
	if(ql<=l&&qr>=r)
	{
		return segtree[pos];
	}

	int mid=(l+r)/2;
	return (query(l,mid,ql,qr,2*pos+1)+query(mid+1,r,ql,qr,2*pos+2));

}
int main()
{
	int n,i;
	cin>>n;
	fr(0,n)cin>>v[i];
	buildtree(0,n-1,0);
	printsegtree();
	int m;
	cin>>m;
	fr(0,m)
	{
		int l,r,val;
		cin>>l>>r>>val;
		update(0,n-1,l-1,r-1,val,0);
		cout<<"Update complete"<<endl;
	}
	printsegtree();

}
