/*input output of string using printf() and scanf()*/
#include<stdio.h>
#include<string.h>
int main(void){
    char str[10] = "sunil" ;
    printf("original string: %s\n",str);
    printf("Enter new value of string:");
    scanf("%s",str);
    printf("New string : %s\n",str);
    return 0;
}