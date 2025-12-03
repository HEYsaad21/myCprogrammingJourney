#include<stdio.h>

void odd_list(int arr[],int size){
    char reply;
   printf("\ndo you want a list of the numbers?'y' for 'yes' ,'n' for 'no' : ");
   scanf(" %c",&reply);
   if(reply=='y'){
    for(int l=0;l<size;l++){
        if(arr[l]%2 !=0){
            printf("%d\n",arr[l]);
        }
    }
   }else ;
}

void count_odd(int arr[],int n){
   
    int sum=0;
    for(int i=0;i<n;i++){
       
      int j= (arr[i]%2!=0);
      
       sum=sum+j;


    }printf("\nnumber of odd numbers is :%d",sum);

    

}
int main()
    
{   int size;
    
    printf("\n\ndefine the size of the number of integers: ");
    scanf("%d",&size);
    int array[size];

    for(int k=0;k<size;k++){
        if(k==0){
            printf("\nenter %dst data :",k+1);
            scanf("%d",&array[k]); }
        else if(k==1){
            printf("\nenter %dnd data :",k+1);
        scanf("%d",&array[k]);
        }
        else if(k==2){
            printf("\nenter %drd data :",k+1);
        scanf("%d",&array[k]);
        }

        else{
        printf("\nenter %dth data :",k+1);
        scanf("%d",&array[k]);
        }
    }

   count_odd(array,size);
    odd_list(array,size);
   

      
    return 0;
}
