#include<stdio.h>
#include<string.h>
int main()
{    
   char str1[]="Apple",str2[]="Banana";
   printf("%d\n",strcmp(str1,str2));

   char str3[]="HHHA",str4[]="HHHB";
   printf("%d\n",strcmp(str3,str4));
   
   char str5[]="HHHH",str6[]="HHHH";
   printf("%d\n",strcmp(str5,str6));



      
    return 0;
}