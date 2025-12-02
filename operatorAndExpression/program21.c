/*Write a program that accepts the radius o f a circle and calculates the area and perimeter of that circle.*/
#include<stdio.h>

int main(void){
    int rad;

    printf("Enter Radius: ");
    scanf("%d",&rad);

    printf("area = %.2f\tperimeter=%.2f\n",(float)rad*rad*3.14,(float)2*3.14*rad);
    return 0;
}