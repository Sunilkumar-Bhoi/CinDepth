/*program to convert temparature celcius to fahrenheit*/
#include<stdio.h>

int main(void){
    float cel, feh;

    printf("Enter temprature in celcius : ");
    scanf("%f",&cel);

    feh=cel*9/5+32;

    printf("Fehrenheit = %.2f\n",feh);

    return 0;
}