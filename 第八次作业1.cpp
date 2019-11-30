#include<stdio.h>
#include"function.h"
int main()
{
	int n;
	int t=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		t=t+Prime(i);
	printf("1~%d",n);
	printf("之间所有质数之和为%d\n",t);
		return 0;
}
int Prime(int n)
{
	int t;
	if(n==0||n==1)
		return 0;
	else
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				n=0;
				break;
			}
		}
		return n;
}
