#include<stdio.h>

typedef int c;


typedef struct student{
    char name[64];
    int roll;
    float cg;
} stu;

int main(){ c number=5;

   stu s1= { "Saad",20,3.58};


   printf("Name: %s\n",s1.name);
   printf("Roll: %d\n",s1.roll);
   printf("cg: %.2f\n",s1.cg);


   printf("\n\n%d",number);

}