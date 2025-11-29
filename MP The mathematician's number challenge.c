#include <stdio.h>
int main() {
    int num, i, prime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num<=1)
    prime=0;
    else{
        for (i=2;i*i<=num;i++){
            if (num%i==0){
                prime=0;
                break;
            }
        }
    }
    if (prime)
    printf("Prime Number\n");
    else
    printf("Not Prime\n");
    if (num%2==0)
    printf("Even Number");
    else
    printf("Odd Number");
    return 0;
}