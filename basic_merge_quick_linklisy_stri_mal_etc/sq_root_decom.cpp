#include<bits/stdc++.h>
using namespace std;
#define fr(a,b) for(i=a;i<b;i++)
#define pb push_back
vector<int>v(100001);
vector<int>sqt;
int  n;
void printsqt();

void update(int i,int b)
{
	i
	int jump=sqrt(n);
	
	
		sqt[i/jump]=sqt[i/jump]-v[i]+b;

		
	v[i]=b;
	//printv();
	printsqt();
}
void printsqt()
{
	int i;
	fr(0,sqt.size())
	{
		cout<<"BLock sum si"<<sqt[i]<<endl;
	}
}
void query(int l,int r)
{
	cout<<"In query"<<endl;	
	int jump=sqrt(n),i;
	int sum=0;

	if(l%jump==0&&r%jump==jump-1)
	{
		cout<<"In if"<<endl;	
		for(i=l/jump;i<=r;i+=jump)
		{
			sum+=sqt[i];

		}
		cout<<"Ans is"<<sum<<endl;
	}
	else
	{
		cout<<"In else"<<endl;
		int left=l%jump;
		for(i=l;i<l+left;i++)sum+=v[i];
		
		l=l+left;
		for(i=l;i<=r-jump;i+=jump)sum+=sqt[i/jump];
		int right=r%jump;
		if(right!=jump-1)
		{


		for(i=r-right;i<=r;i++)
		{
			sum+=v[i];
		}	
		}
		cout<<sum<<endl;

}
}
int main()
{
	
	cin>>n;
	int i,j,l,r;
	fr(0,n)cin>>v[i];
	int jump=sqrt(n);

	for(i=0;i<n;i+=jump)
	{
		int sum=0;
		for(j=i;j<i+jump;j++)
		{
			sum+=v[j];	
		}
		sqt.pb(sum);
	}
	
	fr(0,sqt.size())
	{
		cout<<"BLock sum si"<<sqt[i]<<endl;
	}
	int m;
	cin>>m;
	int a,b;
	fr(0,m)
	{
		cin>>a;
		if(a==1)
		{
			cin>>i>>b;

			update(i,b);
		}
		else
		{
			cin>>l>>r;
			query(l,r);

		}

	}
	

}