#include <stdio.h>
int main(){
    char str[100];
    int i, length=0;
    printf("Enter a word: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    for(i=0;i<length/2;i++){
        if (str[i] != str[length-i-1]){
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}