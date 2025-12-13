/*progrs to understand use of global variable*/
#include<stdio.h>
void fun1(void);
void fun2(void);
int a=10,b=20,c=30;

int main(void){
    printf("inside main function: %d %d %d\n",a,b,c);
    fun1();
    fun2();
    return 0;
}
void fun1(void){
    printf("inside fun1 function : %d %d %d\n",a,b,c);
}
void fun2(void){
    printf("inside fun2 function :%d %d %d\n",a,b,c);
}