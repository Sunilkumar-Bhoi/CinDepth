/*P5.28 Program to find whether a number is prime or not*/

#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    printf("Enter a num : ");
    scanf("%d",&n);
    for(int i=2; i<sqrt(n);i++){
        if(n%i==0){
            printf("Not prime number\n");
            return 0;
        }
    }

    printf("Prime Number\n");
    return 0;
}
