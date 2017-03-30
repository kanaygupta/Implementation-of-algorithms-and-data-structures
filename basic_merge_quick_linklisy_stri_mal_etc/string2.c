#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char line[80];
printf("Enter data");

while((fscanf(stdin,"%*[\t\v\f ]%79[^\n]s",line))!=EOF)
{
	printf("you entered :%s\n",line);

	fgetc(stdin);
	*(line)='\0';
	printf(" enter data: ");
}
printf("thank you");
}
