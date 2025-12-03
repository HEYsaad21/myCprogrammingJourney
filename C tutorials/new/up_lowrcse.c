#include<stdio.h>
int main(){

printf("ENTER A CHARACTER : ");
char c;
scanf("%s",&c);

// if((c>=97)&&(c<=122)){printf("LOWERCASE ALPHABET");}
// else if((c>=65)&&(c<=90)){printf("UPPERCASE ALPHABET");}
// else {printf("NOT A VALID INPUT");}


/* BY COMPAREING CHAR ,since C compiler treats each char into number*/

if((c>='a')&&(c<='z')){printf("LOWERCASE ALPHABET");}
else if((c>='A')&&(c<='Z')){printf("UPPERCASE ALPHABET");}
else {printf("NOT A VALID INPUT");}








return 0;

}
