#include<stdio.h>
typedef struct Node
{
	int n;
	Node*next;
} Node;
Node*change(Node*m1);
Node*connect(Node*m1,Node*m2);
int main()
{
	Node a,b,c,d,e,f,*head1,*head2,*p1,*p2;
	a.n=1;b.n=3;c.n=5;
	d.n=2;e.n=4;f.n=6;
	head1=&a;p1=head1;
	head2=&d;p2=head2;
	a.next=&b;b.next=&c;c.next=NULL;
	d.next=&e;e.next=&f;f.next=NULL;
	Node*p3=connect(p1,p2);
	int j[6];
	for(int i=0;p3;i++)
	{
		j[i]=p3->n;
		p3=p3->next;
	}
	for(i=0;i<5;i++)
	{
		for(int k=0;k<5-i;k++)
		{
			if(j[k]>j[k+1])
			{
				int t=j[k];
				j[k]=j[k+1];
				j[k+1]=t;
			}
		}
	}
	p3=&a;
	for(i=0;p3;i++)
	{
		p3->n=j[i];
		printf("%d\t",p3->n);
		p3=p3->next;
	}
	printf("\n");
	return 0;
}
Node*connect(Node*m1,Node*m2)
{
	Node*p,*p1;
	p=m1;p1=m1;
	while(p->next)
	{
		p=p->next;
		if(p->next==NULL)
		{
			p->next=m2;
			break;
		}
	}
	return p1;
}