#include<stdio.h>
char findGrade(int m1, int m2, int m3, int m4)
{
	float total , per;
	total=m1+m2+m3+m4;
	per=total/4;
	if(per>=85)
		return 'A';
	if(per>=70)
		return 'B';
	if(per>=55)
		return 'C';
	if(per>=40)
		return 'D';
	return 'E';
}
int main(void)
{
	printf("%c ",findGrade(90,98,78,45));
	return 0;
}
