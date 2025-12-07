/*13. In the following code, add braces so that the print do proper indentation.
if(a == 10 ）
if (b==20)
if (c==30)
printf ("a ia 10, b is 20. c is 30\n");
else
printf("a is 10, b is not"); 
*/

#include<stdio.h>
int main(void){
	int a=10,b=20,c=30;
	if(a==10){
		if(b==20){
			if(c==30){
				printf("a is 20, b is 20 and c is 30\n");
			}
			else ;
		}
		else{
			printf("a is 10 but b is not 20\n");
		}
	}
	else{
		printf("a is not 10\n");
	}
	return 0;
}