#include<stdio.h>
int main()
{    
    int age;
    printf("ENTER AGE =");
    scanf("%d",&age);

    if(age <= 19 && age>=13){
        printf("YOU ARE A TEEN\n");
    }
    else if (age<13){
        printf("YOU ARE UNDER 13");
    }
      else if( age>= 19 && age <=40)
      {
        printf("YOR ARE AN ADULT");
      }
      else {
        printf("YOU ARE A SENIOR CITIZEN");

      }

    return 0;
}