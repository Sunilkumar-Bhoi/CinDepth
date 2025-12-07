/*12. Solve this dangling else problem given in the chapter without using braces. Make the else match with the first if without inserting any braces*/

#include<stdio.h>
int main(void){
	char grade='A';
	int marks=89;
	if(grade=='A')
		if(marks>95)
			printf("Exellent\n");
		else ; //null statment help to match closest if and the upper one matches with last one
	else	
		printf("Work hard for A grade\n");

	return 0;
}