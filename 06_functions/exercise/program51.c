/*Write a function to find whether a character is alphanumeric.*/
#include<stdio.h>
int alphaNumeric(char c);
int main(void)
{
	char ch;
	printf("Enter a character: ");
	scanf(" %c",&ch);
	if(alphaNumeric(ch))
		printf("%c is Alphanumeric\n",ch);
	else	
		printf("%c is Not alphanumeric\n",ch);
	return 0;
}
int alphaNumeric(char c)
{
	if( ((c >= 'A' && c <= 'Z')) || ((c >= 'a' && c <= 'z')) || ((c >='0' && c <='9')))
		return 1;
	return 0;
}