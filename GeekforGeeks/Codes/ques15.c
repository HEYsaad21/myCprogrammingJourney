#include<stdio.h>
int main(){


int n,d;
printf("Enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Enter d: ");
scanf("%d",&d);

for(int i=0;i<d;i++){
    int temp=arr[0];
    for(int j=0;j<n;j++){
        arr[j]=arr[j+1];
    }
    arr[n-1]=temp;
}










printf("New array:");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}





printf("\n");

}