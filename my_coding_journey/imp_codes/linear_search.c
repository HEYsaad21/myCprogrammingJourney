#include<stdio.h>
int main(){
int n;
printf("Enter number of element: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int x,location=0,flag=0;
printf("You are looking for: ");
scanf("%d",&x);
for(int i=0;i<n;i++){
    if(x==arr[i]){
       location=i;
       flag=1;
    }
}
if(flag==1){
    printf("%d is found at index:%d",x,location);
}else{
    printf("%d is not found!",x);
}


}