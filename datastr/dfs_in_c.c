#include<stdio.h>
#include<stdlib.h>

typedef struct List
{
		int data;
		struct List* next;;
}list;

typedef struct Node
{
	list* head;
	int size;
}node;

#define fr(a,b,c) for(a=b;a<c;a++)

int visited[200001]={0};

int queue[200002];

int color[200001];

node adj[200001];

void print();

void insert(int a,int b)
{

	list* temp=(list*)malloc(sizeof(list));
	
	temp->data=b;
	
	temp->next=adj[a].head;
	
	adj[a].head=temp;
	
	return ;
}

int bfs(int s)
{
	//cout<<"source is"<<s<<endl;

	color[s]=1;
	
	visited[s]=1;
	
	int i,curr=0,size=0;
	
	queue[0]=s;
	
	size++;
	
	while(curr!=size)
	{
		//printf("curr is %d\n",queue[curr]);
		
		int v=queue[curr++];
		
		list* temp=adj[v].head;
		
		visited[v]=1;

		while(temp!=NULL)
		{
			//printf("neig is %d\n",temp->data);
			if(visited[temp->data]==0)
			{
				color[temp->data]=-1*color[v];
				
				queue[size++]=temp->data;
				
				temp=temp->next;
			}
			else
			{
				if(color[temp->data]==color[v])
				{
					return 0;
				}
				temp=temp->next;
			}
		}
	}
	return 1;
}
int n;
void print()
{
	int i;
	list* temp;
	for(i=1;i<=n;i++)
	{	
		//printf("Sou is %d\n",i);
		temp=adj[i].head;
		while(temp!=NULL)
		{
			//printf("NEig is %d\n",temp->data);
			temp=temp->next;
		}
	}
}

int main()
{
	int m,a,b,i,j;
	scanf("%d%d",&n,&m);
	
	for(i=1;i<=n;i++)
	{
		adj[i].head=NULL;
	}
	
	fr(i,0,m)
	{
		//printf("i is %d",i);
		scanf("%d%d",&a,&b);
		insert(a,b);
		insert(b,a);
		//print();
	}
	//printf("insert comp\n");
	//print();

	for(i=1;i<=n;i++)
	{
		
		if(visited[i]==0)
		{
			int a=bfs(i);
			if(a==0)
			{
				printf("No\n");
				return 0;
			}

		}
	}
	printf("Yes\n");
	return 0;
}
