/*5.32 Program to underatand the switch control statenent*/

/*falling throught cases mean all case executed after selected*/

#include<stdio.h>

int main(void){
    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("First\n");
        case 2:
            printf("Secund\n");
        case 3:
            printf("Third\n");
        default :
            printf("Wrong choice\n");
    }
    return 0;
}