#include<stdio.h>
int main()
{
	int i,j,n,k=97;
	printf("\n enter a no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   
	    k=97;
		for(j=1;j<=i;j++)
		{
			printf("%c\t",k++);
			
		}
		printf("\n");
	}
	return 0;
}
