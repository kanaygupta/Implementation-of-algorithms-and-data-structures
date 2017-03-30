#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[100005	];
int seg[400005][10]={0};
int size=0;
#define fr(a,b,c) for(a=b;a<c;a++)

void buildtree(int l,int r,int pos)
{	size++;
	
	//printf("l,r,d is %d%d%d\n",l,r,pos);	
	if(l==r)
		{
			//printf("l is %d and pos is %d\n",l,pos);
			seg[pos][str[l]-'0']=1;
			return ;
		}
		int mid=(l+r)/2;
		int i;
		buildtree(l,mid,2*pos+1);
		buildtree(mid+1,r,2*pos+2);
		
		for(i=0;i<10;i++)
		{
			seg[pos][i]=seg[2*pos+1][i]+seg[2*pos+2][i];
		}
		return ;
}
void update(int l,int r,int ind ,int prev,int val,int pos)
{
	if(ind>r||ind<l)return ;

	if(l==r)
	{
		
		seg[pos][prev]--;
		seg[pos][val]++;
		return ;
	}
	int mid=(l+r)/2;
	int i;
	update(l,mid,ind ,prev,val,2*pos+1);
	update(mid+1,r,ind ,prev,val ,2*pos+2);

	for(i=0;i<10;i++)
	{
		seg[pos][i]=seg[2*pos+1][i]+seg[2*pos+2][i];
	}
	return ;
}
int query(int l,int r,int ul,int ur,int pos,int i)
{
	if(l>ur||r<ul)return 0;

	if(ul<=l&&r<=ur)
	{
		return seg[pos][i];
	}

	int mid=(l+r)/2;
	return query(l,mid,ul,ur,2*pos+1,i)+query(mid+1,r,ul,ur,2*pos+2,i);
}
/*void printree()
{
int i,j;
for(i=0;i<size;i++)
{
	printf("Pos is %d\n",i);
	for(j=0;j<10;j++)
	{
		printf("%d : %d : | ",j,seg[i][j]);
	}
	printf("\n");
}
}*/
int main()
{
	scanf("%s",str);
	int n=strlen(str);
	
	buildtree(0,n-1,0);
	//size=2*n+1	;
	//printf("Size id %d\n",size);
	int q,i,j;
	scanf("%d",&q);
	//printree();
	int l1,r1,l2,r2,a,b,c;

	fr(i,0,q)
	{
		scanf("%d%d%d",&a,&l1,&r1);
		if(a==1)
		{
			
			update(0,n-1,l1-1,str[l1-1]-'0',r1,0);
			str[l1-1]=r1+'0';
			//printree();
		}
		else
		{
			scanf("%d%d",&l2,&r2);
			if(r2-l2!=r1-l1)
			{
				printf("NO\n");
				continue;	
			}
			if(l1==l2&&r1==r2)
			{
				printf("YES\n");
				continue;
			}
			if(l1==r1&&l2==r2)
			{
				if(str[l1-1]==str[l2-1])
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");

				}
				continue;
			}

			if(l1<=l2&&l2<=r1)
			{
				int temp=r1;
				r1=l2-1;
				l2=temp+1;
			}
			if(l2<=l1&&l1<=r2)
			{
				int temp=r2;

				r2=l1-1;
				l1=temp+1;

			}


			
			
			for(j=0;j<10;j++)
			{
				a=query(0,n-1,l1-1,r1-1,0,j);
				b=query(0,n-1,l2-1,r2-1,0,j);
				//printf("j is %d and a and b is %d %d\n",j,a,b);
				if(a==b)continue;
				
				else
				{
					printf("NO\n");
					break;
				}
			}
			if(j==10)
				{
				printf("YES\n");

			}

		}
		//printf("%s\n",str);
	}
	
return 0;
}