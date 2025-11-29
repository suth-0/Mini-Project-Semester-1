#include <stdio.h>
int main(){
    int n,i;
    int P=0,L=0,T=0;
    printf("Enter number of days: ");
    scanf("%d",&n);
    int arr[n];
    printf("Daily records: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>0)
        P=P+arr[i];
        else if (arr[i]<0)
        L=L+arr[i];
    }
    T=P+L;
    printf("Profit=%d\n",P);
    printf("Loss=%d\n",L);
    printf("Total=%d",T);
    return 0;
}