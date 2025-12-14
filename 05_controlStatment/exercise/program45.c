/*write the following program using continue statment*/

#include<stdio.h>
int main(void){
 int i,k,j,x;
/* 
	for(i=1; i<8; i++)
	{
		if(i!=3 && i!=5)// for i= 1 2 4 6 7 goes inside if
		{
			for(j=1;j<=i;j++)//1 2 4  6 7
			{
				for(k=j;k>0;k--)//1 2 4 6 7
					printf("%d ",k);
				printf("\n");
			}
			printf("\n");
		}
	}
*/
	for(i=1;i<8;i++)
	{
		if(i==3 || i==5)
			continue;
		for(j=1; j<=i;j++)
		{
			for(k=j; k>0; k--)
				printf("%d ",k);
			printf("\n");
		}
		printf("\n");
	}
/*
	int i,j,x;
	for(i=1;i<10;i++)
	{
		x=i+5;
		if(i%2==0)
		{
			x+=i;
			for(j=i;j>0;j--)
			{
				if(i==j)
					x++;
				else	
					x--;
				printf("%d ",x);
			}
			printf("\n");
		}
	else	
		printf("%d\n",x);
	}
*/
	for(i=0;i<10;i++)
	{
		x=i+5;
		if(i%2!=0)
		{
			printf("%d\n",x);
			continue;
		}		
		x+=i;
		for(j=i; j>0; j--)
		{
			if(i!=j)
				x--;
			else
				x++;
			printf("%d ",x);
		}
		printf("\n");
	}
	return 0;
}