#include<stdio.h>
#include<string.h>
int main()
{
    chr str[30];
    printf("enter the number");
    gets(str);
    printf("upper of the string is:%s",strupr(str));
    printf("lower case of the string :%s",strlwr(str));
    printf("the reverse of the string :%s",strrev(str));
    printf("the length of the string :%s",strlen(str));
    return 0;
}
