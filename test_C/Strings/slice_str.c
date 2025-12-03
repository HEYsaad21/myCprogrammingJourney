#include<stdio.h>
#include<string.h>

void slice(char str[],int n,int m,int l){

for(int i=0;i<l;i++){
    if(i>=n&&i<=m){
        printf("%c",str[i]);
    }


}printf("\n");



}

int main(){
int n,m;
char str[64];
printf("Enter a string:");
gets(str);
printf("To print string from index n to m\n");
printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);

slice(str,n,m,strlen(str));

}