/*write this peice of code using while loop*/
#include<stdio.h>
int main(void){	
/*
	i=1,z=0;
	do{
		if(i<5)
		{
			printf("%d ",i++);
			z=z+2;
		}
	}while(i<5);
*/
	int i=1,z=0;
	while(i<5){
		printf("%d ",i);
		i++;
		z+=2;
	}
/*
	do
	{
		printf("Enter employee ID(100-500): ");
		scnaf("%d",&emp_id);
	}while(emp_id<100 || emp_id>500)
*/
	int emp_id;
	while(emp_id <100 || emp_id>500){
		printf("Enter Employee id (100-500): ");
		scanf("%d",&emp_id);
	}
	return 0;
}