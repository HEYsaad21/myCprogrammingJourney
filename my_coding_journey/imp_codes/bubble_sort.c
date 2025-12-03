#include<stdio.h>
int main(){

int size;
printf("Enter the number of elements: ");
scanf("%d",&size);

int arr[size];
// array input
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

// bubble sort
printf("\nSorted order : ");
int temp=0;
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1;j++){
        if(arr[j]>arr[j+1]){
            //swap

         temp=arr[j+1];
         arr[j+1]=arr[j];
         arr[j]=temp;
         temp=0;

        }
    }
}




// array printf
for(int i=0;i<size;i++){
   printf("%d ",arr[i]);
}
printf("\n");

}