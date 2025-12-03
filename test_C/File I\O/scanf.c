#include<stdio.h>
int main(){
    char f[10],m[10],l[10],str[100];
    int age;

    FILE *fptr;
    fptr=fopen("new1.txt","r");
    if(fptr==NULL){
        printf("failed to open file\n");
    }
    else{
    
    // while(fgets(str,100,fptr)!=NULL){
    //   }    


      while( fgets(str,100,fptr)!=NULL ){
        fscanf(fptr,"Name:%s %s %s Age:%d",f,m,l,&age); 
      printf("Name:%s %s %s Age:%d\n",f,m,l,age);




      }             
                                                   

      


    



        fclose(fptr);
    }
}