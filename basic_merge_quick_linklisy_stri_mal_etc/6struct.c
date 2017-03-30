#include<stdio.h>


#include<string.h>





typedef struct Student
{
	char name[30];
	int rollno;
	int score;
}stu;

int main()
{
	stu std[10];
	stu* st1;
	st1=std;
	strcpy(std[0].name,"kanay");
	std[0].rollno=10;
	std[0].score=100;

	printf("%s%d%d",st1[0].name,st1[0].rollno,st1[0].score);



	printf("%s%d%d",st1->name,st1->rollno,st1->score);
	printf("%s%d%d",(*st1).name,(*st1).rollno,(*st1).score);
}
