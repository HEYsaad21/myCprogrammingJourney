#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");


    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
// reversing

int mid, l=0,r=n-1;
int temp;

while(r>=l){
       temp=arr[r];
       arr[r]=arr[l];
       arr[l]=temp;

       l++;
       r--;
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}