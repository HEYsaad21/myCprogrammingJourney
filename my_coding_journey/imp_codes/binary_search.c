#include<stdio.h>
int main(){
int n,x;
printf("Enter number of element: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

// elements must be sorted in ascending order

printf("You are looking for: ");
scanf("%d",&x);


int L=0,R=n-1,M,flag=0;

while (L<=R)
{
    M=(L+R)/2;
if(arr[M]==x){
    printf("%d is found at index:%d\n",x,M);
    flag=1;
    break;
}else if(arr[M]>x){
R=M-1;

}else if(arr[M]<x){
L=M+1;
}

}

if(flag==0){
    printf("%d is not found!\n",x);
}


return 0;
}