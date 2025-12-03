#include<stdio.h>

int main(){
    int arr[]={3,8,2,5,7,6,12};
    int w=4;
    int size=sizeof(arr)/sizeof(int);
    int current=0;
    
    
    for(int i=0;i<w;i++){
        current+=arr[i];
    }

    int max = current ;

    for(int i=1;i<=size-w;i++){
        current=current-arr[i-1]+arr[i+w-1];

        if(max<current){
            max=current;
        }
    }

    printf("max sum subarray: %d\n",max);







}