#include<stdio.h>
typedef struct Student
{
	char name[30];
	int rollno;
	int score;
}stu;

void printdata(stu* std,int num)
{
	int i;
	//
	for(i=0;i<num;i++)printf("%s %d %d",std[i].name,std[i].rollno,std[i].score);
	printf("\n");
	//for(i=0;i<num;i++)printf("%s %d %d",std[i]->name,std[i]->rollno,std[i]->score);
return ;
}

int getdata(stu* std)
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)scanf("%s%d%d",std[i].name,&std[i].rollno,&std[i].score);
	return n;
}


int main()
{
stu std[30];
int num=getdata(std);
printdata(std,num);
}

