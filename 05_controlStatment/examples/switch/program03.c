/*5.35 Program to find whether the alphabet is a vowel or consonant*/

#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch;
    printf("Enter Alphabet: ");
    scanf("%c",&ch);
    switch(tolower(ch)){
        case 'a':
        case 'i':
        case 'o':
        case 'u':
            printf("Alphabet is vowel\n");
            break;
        default:
            printf("Alphabet is consonant\n");
    }
    return 0;
}