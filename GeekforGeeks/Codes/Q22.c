#include<string.h>
#include<stdio.h>

int main(){
char random[64];
printf("Enter str: ");
gets(random);

for(int i=0;random[i]!='\0';i++){

 if(i==0){
    printf("%c ",random[i]);
 }
 else if(random[i]==' '){
     printf("%c ",random[i+1]);
 }

}printf("\n");

    








}
