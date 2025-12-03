 #include<stdio.h>
int main()
{    
//    int a=5;
//    int *ptr=&a;
//    printf("%u\n",ptr);
//    ptr++;
//    printf("%u\n",ptr);
//    ptr--;
//    printf("%u\n",ptr);
      
int a=5,b=6;
int *ptr1=&a;
int *ptr2=&b;

printf("%u\n",(ptr2-ptr1));

printf("%u\n",ptr1==ptr2);


    return 0;
}