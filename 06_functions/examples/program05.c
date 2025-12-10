#include<stdio.h>
void selection(int age,float ht);

int main(void){
    int age;
    float ht;
    printf("Enter height and age");
    scanf("%f%d",&ht,&age);
    selection(age,ht);
    return 0;
}

void selection(int age, float ht){
    if(age>25){
        printf("Age should be greater than 25\n");
        return;
    }
    if(ht<5){
        printf("Height should bemore than 5\n");
        return;
    }
    printf("selected\n");
}