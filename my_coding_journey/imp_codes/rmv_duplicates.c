#include<stdio.h>

int main(){

int arr[]={5,5,7,8,8,9,9,10,10};
int size=sizeof(arr)/sizeof(int);


printf("Unique elements: ");
for(int i=0;i<size;i++){
    if(arr[i]!=arr[i-1]){
       printf("%d ",arr[i]);
    }


}









}