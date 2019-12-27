#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char*Find(char*p,char*a);
int main()
{
	char str[]="I love study and books";
	printf("Enter a string:\n");
	char str1[10];
	scanf("%s",&str1);
	char*p=Find(str,str1);
	if(p==NULL)
		printf("error!\n");
	else
		puts(p);
	return 0;
}
char*Find(char*p,char*a)
{
	int t1=strlen(p);int t2=strlen(a);
	if(t2>t1)
	{
		printf("error!\n");
		exit(0);
	}
	int j=0;
	for(int i=0;i<t1;i++)
	{
		if(p[i]==a[j])
		{
			j++;
		}
		if(j==t2-1)
		{
			break;
		}
	}
	if(j==t2-1)
	{
		char*p2=&p[i-t2+2];
		return p2;
	}
	else
	{
		char*p3=NULL;
		return p3;
	}
}