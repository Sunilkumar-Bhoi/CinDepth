/*P10.14 Program to show the difference between array of stringe and arraf of pointers to strings*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char arr[5][10];
    char *arrp[10];

    arr[0] = "sunil";  /*invalid*/
    arrp[0] = "sunil"; /*valid*/

    strcpy(arr[1], "february");  /*valid*/
    strcpy(arrp[1], "february"); /*invalid*/

    scanf("%s", arr[2]);/*valid*/
    scanf("%s", arrp[2]);/*invalid not initialize*/

    arrp[3]=(char *)malloc(10);
    strcpy(arrp[3],"march"); /*valid*/

    arrp[4]=(char *)malloc(10);
    scanf("%s", arrp[4]);/*valid*/
    return 0;
}