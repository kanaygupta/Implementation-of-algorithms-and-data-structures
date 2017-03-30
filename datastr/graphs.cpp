#include<iostream>
#include<vector>
using namespace std;
typedef struct Node
{
	int dest;
	struct Node* next;
}node;
typedef struct List
{
	node* head;
}list;
typedef struct Graph 
{
	int v;
	list* array;
}graph;
node* createnode(int des)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->dest=des;
	newnode->next=NULL;
	return newnode;
}
graph* creategraph(int v)
{
	graph* newgraph=(graph*)malloc(sizeof(graph));
	newgraph->v=v;
	newgraph->array=(list*)malloc(sizeof(list)*v);

	int i;
	for(i=0;i<v;i++)
	{
		newgraph->array[i].head=NULL;
	}
	return newgraph;
}
void addEdge(graph* gra,int src,int des)
{

	node* newnode=createnode(des);
	newnode->next=gra->array[src].head;

	gra->array[src].head=newnode;


	 newnode=createnode(src);
	newnode->next=gra->array[des].head;

	gra->array[des].head=newnode;
}
void printGraph(graph* gra)
{
	int v;
	for (v = 0; v < gra->v; ++v)
	{
		node* pCrawl = gra->array[v].head;
		printf("\n Adjacency list of vertex %d\n head ", v);
		while (pCrawl)
		{
			printf("-> %d", pCrawl->dest);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}
int main()
{
	int v=5;
	graph* gra=creategraph(5);

	addEdge(gra, 0, 1);
	addEdge(gra, 0, 4);
	addEdge(gra, 1, 2);
	addEdge(gra, 1, 3);
	addEdge(gra, 1, 4);
	addEdge(gra, 2, 3);
	addEdge(gra, 3, 4);

	// print the adjacency list representation of the above graph
	printGraph(gra);

	return 0;
}













	
