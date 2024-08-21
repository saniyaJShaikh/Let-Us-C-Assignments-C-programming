#include<stdio.h>
int main()
{
	int i,n,a[10],b[10],c[10];
	printf("enter number:");
	scanf("%d",&n);	
	printf("enter array A:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter array B:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
    printf("\n result is:\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",c[i]);
}
return 0;	
}
