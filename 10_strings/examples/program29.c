/*sscanf() function*/
#include <stdio.h>

int main(void)
{
    char name[10];
    int age;
    float sal;
    char str[30]="sunil 21 33333.33";
    sscanf(str,"%s%d%f",name,&age,&sal);
    printf("Name :\t%s\n",name);
    printf("Age:\t%d\n",age);
    printf("Salary:\t%f\n",sal);
    return 0;
}