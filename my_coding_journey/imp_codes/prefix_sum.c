#include<stdio.h>

int main(){
    int arr[]={8,3,-2,4,10,-1,0,5,3};
   int k=sizeof(arr)/sizeof(int);//k=9
    int pre[9]={0};

    pre[0]=arr[0];
    for(int i=1;i<9;i++){
       
        pre[i]=pre[i-1]+arr[i];
    }

    for(int i=0;i<k;i++){
        printf("%d ",pre[i]);
    }printf("\n");
}