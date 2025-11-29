#include <stdio.h>
int main(){
    int A[10][7];
    int i,j;
    int totalP[10]={0}, totalD[7]={0};
    int maxP=totalP[0], Smax=1;
    int minP=totalD[0], Dmin=1;
    printf("Enter the records of each students:\n");
    for (i=0;i<10;i++){
        printf("Student %d: ",i+1);
        for (j=0;j<7;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<10;i++){
        for (j=0;j<7;j++){
            totalP[i] = totalP[i] + A[i][j];
            totalD[j] = totalD[j] + A[i][j];
        }
    }
    for (i=0;i<10;i++){
        if (totalP[i]>maxP){
            maxP=totalP[i];
            Smax=i+1;
        }
    }
    for (j=0;j<7;j++){
        if (totalD[j]<minP){
            minP=totalD[j];
            Dmin=j+1;
        }
    }
    printf("\nWeekly Attendance Summary\n");
    printf("\n-------------------------\n");
    printf("\nTotal Present Days of each student:\n");
    for (i=0;i<10;i++){
        printf("Student %d: %d\n",i+1,totalP[i]);
    }
    printf("\nStudent with highest attendance: Student %d (%d Days)\n",Smax,maxP);
    printf("Day with lowest overall attendance: Day %d\n",Dmin);
    return 0;
}