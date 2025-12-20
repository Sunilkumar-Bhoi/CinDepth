/*Write a function convert () that can convert inches to cms and vice versa, The first argument should be the length to
be converted and the second argument should be a character('i' o r "c') denoting the measurement unit of che length given in
first argument*/
#include<stdio.h>
void convert(float a, char b);
int main(void)
{
	float num;
	char ch;
	printf("Number and character('i or 'c'):");
	scanf("%f %c",&num,&ch);
	convert(num,ch);
	return 0;
}
void convert(float a, char b)
{
	if(b=='i')
		printf("%.2f cm",a*2.54);
	else	
		printf("%.2f inch",a/2.54);
}