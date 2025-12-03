
/* proving that Union takes the size of largest data type
member's size */



#include<stdio.h>

union test1{
    int x;
    float y;
    double d;
};

union test2{
    char ch;
    float a;
};

union test3{
    char str[32];
    double z;
} ;

int main(){
  union test1 t1;
  union test2 t2;
  union test3 t3;

  printf("\nSize of t1=%d\n",sizeof(t1));
  printf("\nSize of t2=%d\n",sizeof(t2));
  printf("\nSize of t3=%d\n",sizeof(t3));

}

