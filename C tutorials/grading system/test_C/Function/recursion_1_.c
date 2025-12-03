#include<stdio.h>
void helloWorld(int count);
void helloWorld(int count){
    if(count==0){
    return;
}   printf("Hello World\n");
    helloWorld(count -1);

    
}


int main(){int count;
    printf("how many times to print hello world :");
    scanf("%d",&count);

    helloWorld (count);
    return 0;
}