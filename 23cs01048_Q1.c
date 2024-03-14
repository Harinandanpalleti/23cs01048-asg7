#include <stdio.h>
#include <string.h>
int main(){
        char a[100];
        printf("Enter some text:-\n");
        // scanf("%s",&a);
        gets(a);
         printf("Enter a character:-\n");
         char fc;
         scanf("%c",&fc);
         int freq=0;
         for(int i=0;i<strlen(a);i++){
            if(a[i]==fc){
                freq++;
            }
         }
         printf("The frequency of the character %c = %d",fc,freq);
}