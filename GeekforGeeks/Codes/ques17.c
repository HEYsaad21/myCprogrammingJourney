#include<stdio.h>
int main(){

    int z=0,target,arr[]={2,3,4,10,40};

   printf("target:");
   scanf("%d",&target);
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    if(arr[i]==target){
        printf("Element is present at index %d\n",i);
        z=1;
        break;
    }
   }
   if(z==0){
    printf("Element is not present \n");
   }


}