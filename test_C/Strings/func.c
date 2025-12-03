#include<stdio.h>

struct student{
     char name[64];
     int roll;
     float cg;
};



void printf_info( struct student s1 );

int main(){
struct student s1={"Saad",20,3.58};


printf_info(s1);


} void printf_info( struct student s1 ){

    printf("Name:%s\n",s1.name);
    printf("Roll:%d\n",s1.roll);
    printf("CG:%.2f\n",s1.cg);

}
