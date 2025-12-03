#include<stdio.h>
int main(){

    int arr[]={1,2,2,3,4,4,4,5,5};

   for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        
    if(arr[i]!=arr[i-1]){
        printf("%d ",arr[i]);
    }


   }
}