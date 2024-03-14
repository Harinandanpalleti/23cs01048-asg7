#include <stdio.h>
#include <string.h>
int main(){
    char a[10001];
    printf("Enter a string:-\n");
    gets(a);
    int x=strlen(a);
    // printf("%d",x);
    int check=0;
    for(int i=0;i<x/2;i++)
    if(a[i]==a[x-i-1]){
        check++;
    }
    if(check==x/2){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome ");
    }
}