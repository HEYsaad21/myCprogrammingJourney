

/* Union shares the same(of the largest data type member)
 memory location */
/*But structure distributes different(contiguous) memory address
for all members*/


#include<stdio.h>

union test{
    int x;
    char ch;
    double z;
};
struct test1{
    int x;
    char ch;
    double z;
};

int main(){

    union test t;
    struct test1 t1;

    printf("\nStruct (x)=%d,(ch)=%d,(z)=%d",&t1.x,&t1.ch,&t1.z);
    printf("\nUnion (x)=%d,(ch)=%d,(z)=%d",&t.x,&t.ch,&t.z);




}