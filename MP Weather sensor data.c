#include <stdio.h>
int main(){
    int n,i;
    int P=0,N=0,Z=0;
    printf("Number of readings: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the readings: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>0)
        P++;
        else if (arr[i]<0)
        N++;
        else
        Z++;
    }
    printf ("Positive = %d\n",P);
    printf("Negative = %d\n",N);
    printf("Zero = %d\n",Z);
    return 0;
}