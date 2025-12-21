/*Write a function that accepts a character, if the character is a lower case alphabet its upper case equivalent is returned
otherwise the unchanged character is returned.*/
#include<stdio.h>
char upperCase(char c);
int main(void)
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	printf("%c",upperCase(ch));
	return 0;
}

char upperCase(char c)
{
	if(c>='a' && c<='z')
		return (c - ('a' - 'A'));
	return c;
}
/*
	ASCII
	48=0.....57=9
	65=A....90=Z
	97=a....122=z
*/
