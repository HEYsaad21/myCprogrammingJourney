#include<stdio.h>
int main()
{    
    int a;
    do{
        printf("ENTER A NUMBER : ");
        scanf("%d",&a);
        printf("%d\n",a);
      if(a%7==0){
        break;
      }
    }while(1);
    printf("ENDED ,SINCE INPUT IS A MULTIPLE OF 7");
      
    return 0;
}