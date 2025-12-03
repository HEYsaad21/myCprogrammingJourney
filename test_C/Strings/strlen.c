#include<stdio.h>
#include<string.h>
int main()
{    
   char string[]="hello world";
   int length=strlen(string); //excluding '\0'
   printf("\nlength of sentence(including blank spaces): %d",length);

    return 0;
}