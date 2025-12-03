#include<stdio.h>
typedef struct address{
    int house_no;
    char block[8];
    char city[32];
    char state[32];
} add;

int main(){ 
     add x[5];
     for(int i=0;i<5;i++){

        printf("Data for person %d:\n",i+1);
        printf("House Number:");
        scanf("%d",&x[i].house_no);
        printf("Block:");
        scanf("%s",x[i].block);
        getchar();
        printf("City:");
        scanf("%s",x[i].city);
        getchar();
        printf("State:");
        scanf("%s",x[i].state);
        getchar();
        

     printf("\n");

     }
     for(int i=0;i<5;i++){
        printf("Person %d:\n",i+1);
        printf("House Number:");
        printf("%d",x[i].house_no);
        printf("Block:");
        printf("%s",x[i].block);
        printf("City:");
        printf("%s",x[i].city);
        printf("State:");
        printf("%s",x[i].state);
        
     printf("\n");
     }

    
}