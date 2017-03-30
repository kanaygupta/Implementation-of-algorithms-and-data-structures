nt x,int y)
{
	if(x>n||y>m||x<1||y<1||v[x][y]==0||visited[x][y]==true)
		return;
	visited[x][y]=true;

	size++;
	//cout<<"Marked x,y as true"<<x<<y<<endl;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);

}

