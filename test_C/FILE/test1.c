#include<stdio.h>
#include<string.h>


int main(){

    char name[]="ABCD";
    int len=strlen(name);
    FILE *fptr;
    
    fptr=fopen("file1.txt","w");
    if(fptr==NULL){
        printf("DNE");
    }else{
        printf("Exist**");


     
        fputs(name,fptr);
     






        fclose(fptr);
    }
}