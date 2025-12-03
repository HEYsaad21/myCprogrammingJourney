#include<stdio.h>
int main(){
     char str[100],ch;
    FILE *fptr;
    fptr=fopen("new1.txt","r");
    if(fptr==NULL){
        printf("failed to open file\n");
    }
    else{
    printf("Contents of file:\n");
    while(fgets(str,100,fptr)!=NULL){
        printf("%s",str);
        // puts(str);         // new line every time
    }








        fclose(fptr);
    }
}