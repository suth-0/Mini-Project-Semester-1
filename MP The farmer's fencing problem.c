#include<stdio.h>
int main(){
    int l,w,Area,Perimeter;
    printf("Enter the length in m:");
    scanf("%d",&l);
    printf("Enter the width in m:");
    scanf("%d",&w);
    Area = l*w;
    Perimeter = 2*(l+w);
    printf("Area=%d\n",Area);
    printf("Perimeter=%d",Perimeter);
    return 0;
}