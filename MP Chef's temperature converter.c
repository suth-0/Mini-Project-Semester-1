#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter temp:");
    scanf("%f",&C);
    F= (C*9/5)+32;
    printf("Temperature in Fahrenheit=%f",F);
    return 0;
}