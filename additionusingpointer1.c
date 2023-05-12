#include<stdio.h>
void add(int *,int *,int *);

int main()
{
	int n1,n2,sum;
	printf("enter 2 nos:");
	scanf("%d %d",&n1,&n2);
	add(&n1,&n2,&sum);
	printf("addition of given nos :%d",sum);
	return 0;
}
  
void add(int *n1, int *n2, int *sum)
{
  	*sum=*n1+*n2;
}
