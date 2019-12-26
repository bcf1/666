#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	a=(int *)malloc(5*sizeof(int));
	int i=0;
	int max=5;
	scanf("%d",&a[i]);
	while(a[i]!=0)
	{
		i++;
		scanf("%d",&a[i]);
		if(i>=max)
		{
			int*p=a;
			max=i+5;
			a=(int *)malloc(max*sizeof(int));
			for(int j=0;j<i+1;j++)
			{
				a[j]=p[j];
			}
		}
	}
	for(int m=0;m<i;m++)
	{
		for(int n=0;n<i-m-1;n++)
		{
			if(a[n]>a[n+1])
			{
				int t;
				t=a[n];
				a[n]=a[n+1];
				a[n+1]=t;
			}
		}
	}
	for(int k=0;k<i;k++)
		printf("%d\t",a[k]);
	return 0;
}

