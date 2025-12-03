#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="hello",space[]=" ",str2[]="world";

    int size=strlen(str1)+strlen(str2)+strlen(space);
    char newstr[size];

    for(int i=0;i<strlen(str1);i++){
    newstr[i]=str1[i];
    }
    for(int z=0,i=strlen(str1);i<strlen(str1)+strlen(space);i++,z++){
        newstr[i]=space[z];
        }
    
     for(int z=0,i=strlen(str1)+strlen(space);i<size;i++,z++){
            newstr[i]=str2[z];
            }


    puts(newstr);
    strcat(str1,str2);
    printf("\n");
    puts(str1);
}