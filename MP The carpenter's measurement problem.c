#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm, remainder;
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a=num1;
    b=num2;
    while (b != 0) {
        remainder = a%b;
        a=b;
        b = remainder;
    }
    gcd = a;
    lcm = (num1 * num2) / gcd;
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}
