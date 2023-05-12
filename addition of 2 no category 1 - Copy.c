#include<stdio.h>

int add(int,int);
int main()
{
	int a,b,c;
	printf("\n enter 2 nos:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("\n sum=%d",c);
	
	return 0;
}
int add (int x,int y)
{
	int z;
	z=x+y;
	return z;
}

