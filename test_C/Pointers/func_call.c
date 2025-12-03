#include<stdio.h>



//call by value in argument
// void square (int n){
//     n=n*n;
//     printf("square is : %d\n",n);
// }
// int main()
// {   int num=4;
    
//     printf("num is :%d\n",num);
//     square(num);

 //call by reference in argument  

void _square (int *n){
    *n=(*n)*(*n);
    printf("square is : %d\n",*n);
}
int main()
{   int num=4;
    int *ptr=&num;
    
    _square(&num);
printf("num is :%d\n",num);




      return 0;
}