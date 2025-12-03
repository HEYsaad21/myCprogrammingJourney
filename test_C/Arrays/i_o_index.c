#include<stdio.h>
int main()
{   int marks[5] ;

//input 
int *ptr=&marks[0];
for(int i=0;i<5;i++){
    printf("index :%d ,marks: ",i);
    scanf("%d",&marks[i]);
}

printf("\n\n");
//output
for(int i=0;i<5;i++){
    printf("index :%d ,marks:%d \n",i,marks[i]);
}
   
      
    return 0;
}