#include<stdio.h>
int main()
{    
    int day; //sat-1,sun-2, ..... , fri-7
    printf("ENTER (1~7) : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("SATURDAY");
        break;
    case 2:
        printf("SUNURDAY");
        break;
    case 3:
        printf("MONDAY");
        break;    
    case 4:
        printf("TUESDAY");
        break;
    case 5:
        printf("WEDNESDAY");
        break;
    case 6:
        printf("THURSDAY");
        break;

    case 7:
        printf("FRIDAY");
        break;

    default: printf("NOT A VALID INPUT");
        
    }
      
    return 0;
}