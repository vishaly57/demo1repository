#include<stdio.h>

void add(int,int);
int main()
{
	int a,b;
	printf("\n enter 2 nos:");
	scanf("%d %d",&a,&b);
	add(a,b);	
	return 0;
}
void add (int a,int b)
{
	int c;
	c=a+b;
	printf("\n sum=%d",c);
	
}

