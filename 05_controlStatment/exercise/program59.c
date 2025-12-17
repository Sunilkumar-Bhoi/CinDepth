/*write a program to read rollnumber and marks of 10 student in 3 subjects.the valid range for all roll number is 1000-9999.if roll number entered is not in range, the user should be asked to enter again.calculate total marks of only those student who got more than or equal to 40 marks in each subject.count total number of student whose total is more than 200.print roll number of those student who get highest total*/
#include<stdio.h>
int main(void)
{
	int rol,marks,i,j,count=0,temp=0,highest=0;
	for(i=1; i<=10; i++)
	{
		do
		{
			printf("Enter roll number of student %d (1000-9999): ",i);
			scanf("%d",&rol);
		} while (rol<1000 || rol >9999);

		int total=0, isvalid=1;
		for(j=1;j<=3;j++)
		{
			do
			{
				printf("Enter marks(out of 100) of student %d in subject %d : ",i,j);
				scanf("%d",&marks);
			} while (marks < 0  || marks >100);
			if(marks<40)
					isvalid=0;
			total+=marks;
		}
		if(isvalid)
		{
			if(total > 200)
				count++;
			if(temp < total)
			{
				temp=total;
				highest=rol;
			}
		}
	}
	printf("number of student have more than 200 marks: %d\n",count);
	printf("Roll number with highest total : %d\n",highest);
	return 0;
}