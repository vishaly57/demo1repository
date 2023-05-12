#include<stdio.h>

void add();
int main()
{
	
	add();	
	return 0;
}
void add ()
{
	int a,b,c;
	printf("\n enter 2 nos:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n sum=%d",c);
}

