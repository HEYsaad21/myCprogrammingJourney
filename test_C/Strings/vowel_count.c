#include<stdio.h>
#include<string.h>
int vowelCount( char str[],int L);
int main(){

    char str[64];
    printf("Enter a sentence:");
    gets(str);

     int count=vowelCount(str,strlen(str));
    
     printf("\nNumber of Vowel in the string is: %d\n",count);

}

int vowelCount( char str[],int L){
     int count=0;

     for(int i=0;i<L;i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }


     }
     return count;

}