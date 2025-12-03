#include<stdio.h>
#include<string.h>

int main(){

    char str[64];
    char ch;

    printf("Enter a string:");
    gets(str);
    printf("what character you want to find:");
    scanf("%c",&ch);
    
    int flag=0;
    for(int i=0;i<strlen(str);i++){

        if(str[i]==ch){
            printf("%c is present in string",ch);
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("%c is not present in string",ch);
    }

    printf("\n");


}