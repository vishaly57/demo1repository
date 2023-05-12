#include<stdio.h>
int main()
{
	int a[30],n,i;
	printf("enter value of n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter element at a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n array element are as below :");
	
	for(i=0;i<n;i++)
	{
		printf("\n element at a[%d]:[%d]",i,a[i]);
		
    }
    
    return 0;
}
