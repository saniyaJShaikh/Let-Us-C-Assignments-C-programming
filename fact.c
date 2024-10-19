#include<stdio.h>
int main()
{
	int i,fact=1,number;
	printf("Enter number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
	fact=fact*i;
	}
	printf("factorial of %d number is:%d",number,fact);
	return 0;
}
//##OUTPUT##
//Enter number:3
//factorial of 3 number is:6
//Enter number:23
//factorial of 23 number is:862453760