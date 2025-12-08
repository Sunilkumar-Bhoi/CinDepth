/*in this program we have use three library function printf scanf and sqrt*/
#include<stdio.h>
#include<math.h>

int main(void){
    double n,s;
    printf("Enter a number: ");
    scanf("%lf",&n);

    s=sqrt(n);
    printf("Square rot of %.2lf is %.2lf\n",n,s);
    return 0;
}