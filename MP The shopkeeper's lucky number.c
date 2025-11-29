#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num%2==0){
         printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
    if (num%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
        return 0;
    }
    

}