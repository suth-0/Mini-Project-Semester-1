#include <stdio.h> 
int main(){
    int n, m, i, j;
    printf("Enter number of students and days: ");
    scanf("%d %d", &n, &m);
    int bill[n][m];
    printf("Enter the weekly spendings of each student:\n");
    for (i=0; i<n; i++){
        printf("Student %d: ", i+1);
        for (j=0; j<m; j++){
            scanf("%d", &bill[i][j]);
        }
    }
    int Stotal[n], Dtotal[m];
    for (i=0; i<n; i++){
        Stotal[i] = 0;
        Dtotal[i] = 0;
        for (j=0; j<m; j++){
            Stotal[i] += bill[i][j];
            Dtotal[j] += bill[i][j];
        }
    }
    int Dmax = 0;
    for (j=1; j<m; j++){
        if (Dtotal[j] > Dtotal[Dmax])
            Dmax = j;
    }
    int Shighest = Stotal[0];
    for (i=1; i<n; i++){
        if (Stotal[i] > Shighest)
            Shighest = Stotal[i];
    }
    printf("Student's weekly spendings:\n");
    for (i=0; i<n; i++){
        printf("Student %d: %d\n", i+1, Stotal[i]);
    }
    printf("Day with highest collection: %d\n", Dmax + 1);
    printf("Highest spending student(s): ");
    for (i=0; i<n; i++){
        if (Stotal[i] == Shighest)
            printf("Student %d ", i+1);
    }
    printf("\n");
    return 0;
}
