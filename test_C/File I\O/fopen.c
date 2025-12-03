#include<stdio.h>
int main(){
     FILE *fptr;

     fptr=fopen("test.txt","w");

    if(fptr==NULL){
        printf("FILE does not exit\n");
    }else{
        printf("FILE is opened!\n");

        fclose(fptr);
    }



}