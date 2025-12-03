#include<stdio.h>
int main(){
    char str[32];

    FILE *fptr;
    fptr=fopen("new.txt","a");


    if(fptr==NULL){
        printf("FILE does not exist\n");
    }else{
        printf("FILE opened successfully!!\n");
        printf("Enter your full name:");
        gets(str);
          fputs(str,fptr);
          fputs("\n",fptr);
        printf("FILE is written successfully!!\n");

        fclose(fptr);
    }
}