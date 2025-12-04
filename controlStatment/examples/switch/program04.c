/*.36 A menu driven program using infinite loop and switch*/

#include<stdio.h>
#include<stdlib.h>  

int main(void){
    int choice;
    while(1){
        printf("1.Create a datbase\n");
        printf("2.Insert a new record\n");
        printf("3.Modify a record\n");
        printf("4.Delete a record\n");
        printf("5.Display all record\n");
        printf("6.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Database created...\n");
                break;
            case 2:
                printf("Reord inserted...\n");
                break;
            case 3:
                printf("Record modified...\n");
                break;
            case 4:
                printf("Record deleted...\n");
                break;
            case 5:
                printf("Record displayed....\n");
                break;
            case 6:
              exit(1);
            default :
                printf("Wrong choice..\n");
        }
    }
    return 0;
}