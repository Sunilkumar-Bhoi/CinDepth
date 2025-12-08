#include<stdio.h>
int main(void){
	int var=2,x=1,y=2;
	switch(var){
		case 'x':
			x++;
			break;
		case 'y':
			y++;
			break;
		default:
			printf("error cannot compare character in ''");
	}
	return 0;
}