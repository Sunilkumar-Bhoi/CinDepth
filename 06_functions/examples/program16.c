/*program to undestand the use of static variable*/
#include<stdio.h>
void func(void);
int main(void){
    func();
    func();
    func();
    return 0;
}
void func(void){
    int a=10;
    static int b=11;
    printf("a=%d, b=%d\n",a,b);
    a++;
    b++;
}