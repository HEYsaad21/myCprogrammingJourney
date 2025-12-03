#include<stdio.h>
#include<string.h>
int main(){
      char name[20]="Saad";
      int len=strlen(name);

    FILE *fptr;
    fptr=fopen("textNew.txt","a");
    if(fptr==NULL){
        printf("FILE does not exist\n");
    }else{
        printf("FILE is opened!\n");

       for(int i=0;i<len;i++){
        fputc(name[i],fptr);

       }

       printf("FILE is written successfully!\n");


        fclose(fptr);
    }
}