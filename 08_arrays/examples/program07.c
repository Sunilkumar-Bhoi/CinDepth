/*P8.7 Program to paca array elementa to a function*/
#include<stdio.h>
void check(int n)
{
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");

}
int main(void){
    int arr[10],i;
    for(i=0; i<10; i++){
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
}