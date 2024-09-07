#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	printf("enter the first string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("string are equal");
	else
	printf("string are not equal:");
	printf("\n Enter the string:");
	gets(str1); 
	strcpy(str2,str1);
	printf("\nThe given string is:%s",str2);
	strcat(str1,str2);
	printf("\nThe concatenated string is:%s",str1,str2);
	return 0;	
}
//***output***//
enter the first string:Hello
enter the second string:Hello
string are equal
 Enter the string:saniya shaikh

The given string is:saniya shaikh
The concatenated string is:saniya shaikhsaniya shaikh