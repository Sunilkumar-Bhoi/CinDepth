/*converted if else into switch*/
#include<stdio.h>
int main(void){
	//1
	switch(k){
		case 1:
			y=x+1;
			break;
		case 2:
			y=0;
			x=0;
			break;
		case 3:
		case 4:
		case 5:
			y++;
			break;
		case 6:
			y+=4;
		default:
			y--;
	}
	//2
	switch(k){
		case 1:
			y=x+1;
			break;
		case 2:
		case 3:
		case 4:
			y++;
		case 5:
			y--;
		case 6:
			y=0;
	}
	return 0;
}