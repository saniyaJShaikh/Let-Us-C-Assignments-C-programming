#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	printf("Enter the string:");
	gets(str);
	printf("\n Uppercase of the string is: %s",strupr(str));
	printf("\n Lowercase of the string is:%s",strlwr(str)); 
	printf("\n Reverse of the string is: %s",strrev(str));
    printf("\n Length of the string is: %d",strlen(str));
    return 0;
}
//****output ****//

Enter the string:saniya shaikh

 Uppercase of the string is: SANIYA SHAIKH
 Lowercase of the string is:saniya shaikh
 Reverse of the string is: hkiahs ayinas
 Length of the string is: 13