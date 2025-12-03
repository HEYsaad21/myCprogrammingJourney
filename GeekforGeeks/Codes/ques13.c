#include<stdio.h>

int main(){

int arr[]={4, 7, 2, 1, 9};

// max of array
int max=-999999,min=999999;


for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}

printf("Minimum element is: %d\nMaximum element is: %d",min,max);


}