#include <stdio.h>
#include <string.h>

void func(char str[]);

int main(void)
{
    char str[] = "Vijaynagar";
    func(str);
    return 0;
}

void func(char str[])
{
    str = str + 5; // str is pointer here so assignable and point to str[5]
    printf("%s\n", str);
}