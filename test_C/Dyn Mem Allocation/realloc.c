#include<stdio.h>
#include<stdlib.h>

int main(){ int m,n;
    printf("Enter the required qty of memory of int type,m: ");
    scanf("%d",&m);
    int *ptr=(int*)calloc(5,sizeof(int));

    printf("\nFrom pointer:\n");
    for(int i=0;i<m;i++){
        printf("%d\n",*(ptr+i));
    }

   int z;
   printf("Do you want to re-allocate memory (yes=1,no=0):");
   scanf("%d",&z);
   if(z==1){
        printf("Enter new size: ");
        scanf("%d",&n);
       ptr=realloc(ptr,n*sizeof(int));

       printf("\nFrom pointer:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
   }

     free(ptr);
}