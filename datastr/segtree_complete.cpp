#include<bits/stdc++.h>
using namespace std;
#define fr(a,b) for(i=a;i<b;i++)
#define vi vector<int>

vi v(100001);
vi segtree(100001);
int size=0;
void buildtree(int low,int high,int pos)
{
	size++;
	if(low==high)
	{
		segtree[pos]=v[low];
		return ;
	}

	int mid=low+(high-low)/2;
	buildtree(low,mid,2*pos+1);
	buildtree(mid+1,high,2*pos+2);
	segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);
	
	return ;

}
int  search(int low,int high,int qlow,int qhigh,int pos)
{
	if(qlow<=low&&qhigh>=high)
	{
		return segtree[pos];

	}
	else if(low>qhigh||qlow>high)return 100000000;
	else
	{
		cout<<"In partial overlap"<<endl;
		int mid=low+(high-low)/2;
		return min(search(low,mid,qlow,qhigh,2*pos+1),search(mid+1,high,qlow,qhigh,2*pos+2));
	}
		//cout<<"Search answer is"<<	}
}
int main()
{
	int n;
	cin>>n;
	int i;
	//int size=4*n;
	fr(0,n)cin>>v[i];
	buildtree(0,n-1,0);
	for(i=0;i<size;i++)
	{
		cout<<"Seg element is"<<segtree[i]<<endl;

	}
	cout<<"No of query"<<endl;
	int m;
	cin>>m;
	for(i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<"Search result is"<<search(0,n-1,l-1,r-1,0)<<endl;
	}
}

