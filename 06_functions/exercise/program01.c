#include<stdio.h>
void func(void);
int main(void)
{
	printf("Lucknow\n");
	goto ab;/*gives error of undeclared label ab*/
	return 0;
}
void func(void)
{
	ab:
	printf("Barelly\n");
}
