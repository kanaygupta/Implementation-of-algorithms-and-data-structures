#include<stdio.h>
typedef struct Student
{
	char name[50];
	int rollno;
}student;
int getdata(student* stu)
{
	int n;
	printf("Enter number of students\n");
	scanf("%d",&n);
	printf("Enter data\n");
	int i;

	for(i=0;i<n;i++)
	{
		scanf("%s %d",stu[i].name,&(stu[i].rollno));
	}
	return n;
}
void printdata(student* s,int n)
{
	printf("Data is\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",s[i].name,s[i].rollno);
	}
	return ;
}

int main()
{
	student s[300];

	int n=getdata(s);
	printdata(s,n);
}
