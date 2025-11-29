Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥️ Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1




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
