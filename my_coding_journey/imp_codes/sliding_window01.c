
#include<stdio.h>
int main(){
    int arr[]={3,8,2,5,7,6,12};
    int w=4;
    int size=sizeof(arr)/sizeof(int);
    int current=0;
    int max=-9999999;
    
    for(int i=0;i<=size-w;i++){
         
        for(int j=i;j<w+i;j++){
            current+=arr[j];
        } printf("%d ",current);

        if(current>max){
            max=current;
        }
        current =0;
    }

    
printf("\nMAX sum subarray: %d\n",max);

}