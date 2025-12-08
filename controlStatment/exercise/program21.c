/*how many time while loop will iterate*/
#include<stdio.h>
int main(void){
	/*
		while(-1){
			printf("test loop\n");//infinite loop
		}

	while(!0){
		printf("test loop\n");//infinity loop
	}

		while(0){
		printf("test loop\n");//0 times
	}
*/
//	int a=0;int b =1;
/*	while(a=0){
		printf("test loop\n");//gives warnning if a=0 is with paranthesis loop infinite
	}

	while(a==2){
	printf("Test loop \n");//iterate 0 times cause condition is false
}
	
	while(a=b){
		printf("test loop");//paranthesis problem or put ==
	}
			*/

	int a=1,b=0;
	while(a==b){
		printf("Test loop\n");//0 times because condition false
	}
	return 0;
}