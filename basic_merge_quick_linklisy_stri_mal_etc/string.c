##include<stdio.h>
int main()
{
	char str[10],str1[10];

	int i;
	for(i=0;i<10;i++)scanf("%c",&str[i]);
	
	for(i=0;i<10;i++)scanf("%c",&str1[i]);
	//scanf("%s",str1);
//	int i;
	for(i=0;i<10;i++)printf("%d\n",str[i]);
	
	for(i=0;i<10;i++)printf("%d\n",str1[i]);
}
