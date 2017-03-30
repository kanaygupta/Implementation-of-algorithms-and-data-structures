#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char name[32];
	int roll;
	int score;
}Stu;

int main()
{
	//Stu* std[100];
	int i=0;

	while(1)
	{
		Stu* std[i]=malloc(sizeof(Stu*));

		std[i]=(Stu*)malloc(sizeof(Stu));
		scanf("%s%d%d",std[i]->name,&std[i]->roll,&std[i]->score);
		if(std[i]->name[0]=='k')break;
		
		i++;
	}
int j;
for(j=0;j<=i;j++)printf("%s%d%d\n",std[j]->name,std[j]->roll,std[j]->score);
}
