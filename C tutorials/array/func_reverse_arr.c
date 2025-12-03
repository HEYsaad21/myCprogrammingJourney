#include<stdio.h>

void reverse(int arr[],int n){
    
    for (int j=n;j>=0;j--){
        printf("\t\t %d\n",arr[j]);
    }

};




int main()
{    int n;
     
     printf("enter the number of integers: ");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
        if(i==0){printf("\nenter 1st data: ");
                    scanf("%d",&arr[i]);}
        else if(i==1){printf("\nenter 2nd data: ");
        scanf("%d",&arr[i]);}
        else if(i==2){printf("\nenter 3rd data: ");
        scanf("%d",&arr[i]);}
        else {
           printf("\nenter %dth data: ",i+1) ;
           scanf("%d",&arr[i]);
        }


     }
     printf("\n\n\t THE REVERSED ORDER :   ");
       reverse(arr,n);
   
      
    return 0;
}