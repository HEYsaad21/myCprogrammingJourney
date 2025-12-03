#include<stdio.h>
int main()
{    
  int size;
  printf("enter the size of array: ");
  scanf("%d",&size);
  int arr[size],freq[10]={};

for(int i=0;i<size;i++){
  scanf("%d",&arr[i]);
}
// traverse array and count the number of same digit
for(int i=0;i<size;i++){
  freq[arr[i]]++;

}printf("\nDigit\tFrequency\n");

//displaying frequency
for(int j=0;j<10;j++){
    printf("%d\t%d",j,freq[j]);
    
        printf("\n");
    
}

      
    return 0;
}