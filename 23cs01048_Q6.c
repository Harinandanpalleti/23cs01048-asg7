#include <stdio.h>
#include <string.h>
int main(){
    char a[10001],s[100];
    printf("Enter a string:-\n");
    gets(a);
    printf("Enter a substring to be searched:-\n");
    gets(s);
    int count=0,index=0,j=0;
    for(int i=0;i<strlen(s);i++){
        for(j=index;j<strlen(a);j++){
            if(s[i]==a[j]){
                count++;
                index++;
                j=index;
                break;
            }
            index++;
        }
    }
    if(count==strlen(s)){
        printf("It is a substring");
    }
}