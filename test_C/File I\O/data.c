#include<stdio.h>
#include<stdlib.h>
int main(){

    char name[50];
    int n,num;
   char str[100];
    FILE *fptr=fopen("info.txt","a");
    if(fptr==NULL){
        printf("Failed to open!");
    }

    printf("Enter number of student:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        getchar();
        printf("Data %d\n",i+1);
        printf("Enter name:");
        gets(name);
        //getchar();
        printf("Enter number:");
        scanf("%d",&num);
         
        fputs(name,fptr);
        fprintf(fptr," %d",num);
        fputs("\n",fptr);
       

    }   fclose(fptr);


    fptr=fopen("info.txt","r");
    while(fgets(str,100,fptr)!=NULL){
         printf("%s",str);
    }    fclose(fptr);

}