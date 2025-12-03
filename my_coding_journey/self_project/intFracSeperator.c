// integer & fractional value seperator 
#include <stdio.h>

int main() {
    double digit;
    printf("Enter a number: ");
    scanf("%lf",&digit);
    int integerPart=(int)digit;
    double fractionalPart= (double) (digit-integerPart);
    
    printf("\nInteger Part= %d",integerPart);
    printf("\nFractional Part= %.*lf\n",15,fractionalPart);


    return 0;
}