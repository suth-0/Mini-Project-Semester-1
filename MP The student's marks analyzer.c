#include<stdio.h>
int main(){
    int n,i;
    float Total=0,Average;
    int marks;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter marks: ");
    for (i=0;i<n;i++){
        scanf("%d",&marks);
        Total= Total+marks;
    }
    Average = Total/n;
    printf("Total Marks=%.2f\n",Total);
    printf("Average Marks=%.2f",Average);
    return 0;
}