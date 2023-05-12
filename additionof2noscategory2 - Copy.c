#include<stdio.h>

int add();
int main()
{
	int c;
	c=add();
	printf("\n sum=%d",c);
	
	return 0;
}
int add ()
{
	int x,y,z;
	printf("\n enter 2 nos:");
	scanf("%d %d",&x,&y);
	z=x+y;
	return z;
}

