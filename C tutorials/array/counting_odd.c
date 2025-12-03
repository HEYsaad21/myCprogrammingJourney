#include<stdio.h>

void count_odd(int arr[],int n){
   
    int sum=0;
    for(int i=0;i<n;i++){
       
      int j= (i%2==0);
      
       sum=sum+j;


    }printf("\nnumber of odd numbers is :%d",sum);
}
int main()
{    int array[10]={1,2,3,4,5,6,7,8,9,10};

   count_odd(array,10);
      
    return 0;
}
