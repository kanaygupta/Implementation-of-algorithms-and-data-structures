#include<stdio.h>

typedef struct student{
	char name[50];
	int rollno;
}Student ;



int main()
{
	Student s1;
	printf("Enter name and roll no.");
	scanf("%s%d",s1.name,&s1.rollno);
	printf("name is %s and roll no. is %d",s1.name,s1.rollno);
}
