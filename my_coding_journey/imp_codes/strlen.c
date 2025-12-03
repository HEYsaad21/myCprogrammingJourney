#include<stdio.h>
 #include<string.h>

int main()
{    printf("Enter a string: ");
char str[64];
gets(str);
printf("length of string: %d",strlen(str));

   
      
    return 0;
}