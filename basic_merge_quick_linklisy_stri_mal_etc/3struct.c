#include<stdio.h>

typedef struct student{
	char  name[50];
	int class;
	int rollno;
}Student;

//void printdata(Student** stu,int n);

int getdata(Student* sta)
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",sta[i].name,&sta[i].class,&sta[i].rollno);
	}
	return n;
}

void sortdata(Student* stu,int n)
{
	int i,j;
//	Student* stp[100];
	//for(i=0;i<n;i++)stp[i]=&stu[i];

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(stu[i].rollno>stu[j].rollno)
			{
				Student temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
	}
	//printdata(stp,n);

}
void printdata(Student* stu,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s %d %d",stu[i].name,stu[i].class,stu[i].rollno);
		printf("\n");

	}


return ;
}

int main()
{
	Student stu[100];

	int num=getdata(stu);
	printdata(stu,num);
	sortdata(stu,num);
	printdata(stu,num);
}
