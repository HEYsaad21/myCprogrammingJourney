#include<stdio.h>
#include<string.h>

int main(){
    char str1[32],str2[32];

    printf("Enter a word:");
    scanf("%s",str1);
    

    strcpy(str2,str1);
    // reversing 

    int l=0,r=strlen(str1)-1;
    while(l<=r){
        // swap;;
        char temp=str1[r];
        str1[r]=str1[l];
        str1[l]=temp;
        l++;
        r--;

    }
    
if(strcmp(str1,str2)==0){
    printf("%s is a palindrome\n",str2);
}
else{
    printf("%s is not a palindrome\n",str2);

}

}