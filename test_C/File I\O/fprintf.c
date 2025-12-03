#include<stdio.h>
int main(){

    int age,name[32];

    FILE *fptr;
    fptr=fopen("new1.txt","a");
    if(fptr==NULL){
        printf("Failed to open a FILE!\n");
    }else{
        printf("FILE is opened successfully!\n");

        printf("Enter your name:");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(fptr,"Name:%s\nAge:%d\n",name,age);
        printf("Data is stored in file!\n");

        fclose(fptr);
    }
}