#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of memory ,n:");
    scanf("%d",&n);

    int *ptr=(int*)malloc(n*sizeof(int));
    printf("Address of zeroth index of pointer :%d\n",ptr);

    printf("\nValues by malloc:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }  free(ptr);
}