#include<stdio.h>
int count( char arr[]);

int main()
{   char name[100] ;
printf("enter your name:");
fgets(name,100,stdin);

  

   printf("\ninput char length is(including blank spaces):%d\n", count(name));
      
    return 0;
}
int count( char arr[]){
int C=0;

for(int i=0;arr[i]!='\0';i++){
    C++;
}return C-1;


}
