#include<stdio.h>
typedef struct Student
{
	char name[30];
	int rollno;
}student;


int main()
{
	student s;

	printf("please enter name\n");
	scanf("%s",s.name);
	printf("Enter roll no.\n");
	scanf("%d",&(s.rollno));
}
