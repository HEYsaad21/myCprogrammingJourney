#include<stdio.h>
#include<stdlib.h>

int main(){

int k;
int *ptr=(int*)malloc(5*sizeof(int));
printf("Enter first 5 odd numbers: ");
for(int i =0;i<5;i++)
{
    scanf("%d",(ptr+i));
}
printf("\nDo you want to print? (yes=1,No=0): ");
scanf("%d",&k);
if(k==1)
{
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
} k=0;
printf("\nRE-ALLOCATION\n");
ptr=realloc(ptr,6*sizeof(int));
printf("Enter first 6 even numbers: ");

for(int i=0;i<6;i++)
{
    scanf("%d",ptr+i);
}

printf("\nDo you want to print? (yes=1,No=0): ");
scanf("%d",&k);
if(k==1)
{
    for(int i=0;i<6;i++){
        printf("%d\n",*(ptr+i));
    }
} k=0;


free(ptr);


}