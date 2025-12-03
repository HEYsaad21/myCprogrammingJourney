#include <stdio.h>
void Kon_nichiwa(){
printf("Kon'nichiwa\n");
}
void bonjour(){
    printf("bonjour\n");
}
int main() { 
    printf("\nEnter j if japanese , or f if french :");
    char ch;
    scanf("%c",&ch);
    if (ch=='j'){
       Kon_nichiwa();
    }else{
        bonjour();
    }
    return 0;
}