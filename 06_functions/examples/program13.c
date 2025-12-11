/*program using function with arguments but no return value

program to find type and area of a triangle*/

#include<stdio.h>

void type(float a,float b,float c);
void area(float a,float b,float c);

int main(void)
{
    float a,b,c;
    printf("Enter the side of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b+c && b>a+c && c>a+b)
    { 
        type(a,b,c);
        area(a,b,c);
    }
    else
        printf("No triangle possible with these side");
    return 0;
}

void type(float a,float b,float c)
{
    if((a*a)+(b*b==(c*c)) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b))
        printf("Right angle triangle\n");
    if(a==b && b==c)
        printf("Equalateral Triangle\n");
    else if(a==b || b==c || c==a)
        printf("Isoscales triangle\n");
    else
        printf("Scalas Triangle\n");
    
}

void area(float a, float b, float c)
{
    float area,s;
    s=(a+b+c)/2;
    area=(s*(s-a)*(a-b)*(s-c));
    printf("Area of triangle=%f\n",area);
}