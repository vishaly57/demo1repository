#include<stdio.h>
int main()
{
	int i,j,n,k=97;
	printf("\n enter a no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{    
		    if(k%2!=0)
			printf("%c\t",k);
			k+=2;
		}
		printf("\n");
	}
	return 0;
}
