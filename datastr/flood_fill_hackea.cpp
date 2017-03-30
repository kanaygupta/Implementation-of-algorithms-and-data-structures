#include<bits/stdc++.h>
using namespace std;
int n,m;
vector< vector<int> > v(101, vector < int > (101));
int flag=0;
bool visited[101][101]={false};
#define fr(a,b) for(i=a;i<b;i++)
void dfs(int x,int y)
{
	
	if(x>n||y>m)return ;
	if(x<=0||y<=0)return ;
	
	if(visited[x][y]==true)return ;

	visited[x][y]=true;
	
	if(x==n&&y==m)
	{
		flag=1;
		return ;
	}
	if(v[x][y]==0)return ;
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main()
{
	
	cin>>n>>m;
	int i,j;
	fr(1,n+1)
	{
		for(j=1;j<=m;j++)
		{
			cin>>v[i][j];
		}
	}
	dfs(1,1);
	if(flag==1)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

}
