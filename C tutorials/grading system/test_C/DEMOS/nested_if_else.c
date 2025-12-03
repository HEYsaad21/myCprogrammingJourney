#include<stdio.h>
int main()
{    
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);

    if(num>0){
        printf("POSITIVE NUMBER\n");
        if(num%2==0){
            printf("EVEN NUMBER \n");

        }else{
            printf("ODD NUMBER\n");
        }
    }else if(num<0){
        printf("NEGATIVE NUMBER\n");

        if((-1*num)%2==0){
            printf("MODULUS OF NUMBER IS EVEN\n");
        }else{
            printf("MODULUS OF NUMBER IS ODD\n");
        }
    }else{
        printf("THE NUMBER IS ZERO");
    }
      
    return 0;
}