#include <stdio.h>
int main(){
    int arr[5][3];
    int i,j;
    int highest;
    printf("Enter the marks: \n");
    for(i=0;i<5;i++){
        printf("Student %d: ",i+1);
        for (j=0;j<3;j++){
            scanf ("%d",&arr[i][j]);
        }
    }
    for (j=0;j<3;j++){
        highest=arr[0][j];
        for (i=0;i<5;i++){
            if (highest<arr[i][j])
            highest = arr[i][j];
        }
    printf("Highest marks in %d = %d\n",j+1,highest);
    }
    return 0;
}
