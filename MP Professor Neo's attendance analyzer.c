#include <stdio.h>
int main(){
    int n,i;
    int p=0,a=0;
    printf("Enter number of students:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter attendance of students:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]==1)
        p++;
        else if (arr[i]==0)
        a++;
    }
    printf("Present = %d\n",p);
    printf("Absent= %d\n",a);
    return 0;
}