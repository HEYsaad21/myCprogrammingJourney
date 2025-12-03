#include<stdio.h>

union test{
    int x,y,z;
};

int main(){
     union test T;
     T.x=10;

     printf("x=%d\n",T.x);
     printf("y=%d\n",T.y);
     printf("z=%d\n",T.z);




}