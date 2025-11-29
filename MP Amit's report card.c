#include <stdio.h>
int main(){
    int n,i,mark,highest,lowest;
    printf("Enter number of subjects: ");
    scanf("%d",&n);
    printf("Enter the marks:");
    scanf("%d",&mark);
    highest=lowest=mark;
    for(i=1;i<n;i++){
        scanf("%d",&mark);
    if(mark>highest)
    highest=mark;
    else 
    lowest=mark;
    }
    printf("Highest = %d\n",highest);
    printf("Lowest = %d\n",lowest);
    return 0;
}