// dividend=divisor*quotient + remainder
// under construction :')

#include <stdio.h>
void binary(int decimal)
{

    int binary[64];
    int remainder, i = 0;
    if (decimal == 0)
    {
        printf("0\n");
        
    }
    while (decimal > 0)
    {
        remainder = decimal % 2;
        binary[i] = remainder;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void octal(int decimal)
{

    int octal[64];
    int remainder, i = 0;
    if (decimal == 0)
    {
        printf("0\n");
        
    }
    while (decimal > 0)
    {
        remainder = decimal % 8;
        octal[i] = remainder;
        decimal = decimal / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void hex(int decimal)
{

    int hex[64];
    int remainder, i = 0;
    if (decimal == 0)
    {
        printf("0\n");
      
    }
    while (decimal > 0)
    {
        remainder = decimal % 16;
        hex[i] = remainder;
        decimal = decimal / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        int hexDigit = hex[j];
        if (hexDigit >= 10)
        {
            printf("%c", hex[j] + 55);
        }
        else
        {

            printf("%d", hex[j]);
        }
    }
    printf("\n");
}

int main()
{
    int decimal, option;

    printf("\n\tBASE CONVERSION\n");
    printf("select you option\n\n");
    printf("1.Decimal to Binary(base:2)\n");
    printf("2.Decimal to Octal(base:8)\n");
    printf("3.Decimal to Hexadecimal(base:16)\n");
    printf("\n\tPress 0 to exit");
    printf("\nyour option: ");
    scanf("%d", &option);

    switch (option)
    {

    case 0:
        break;

    case 1:
        printf("\nenter decimal digit: ");
        scanf("%d", &decimal);
        printf("Binary: ");
        if (decimal < 0)
        {
            printf("Negative integer is not supported !\n");
        }
        else
        {
            binary(decimal);
        }
        break;

    case 2:
        printf("\nenter decimal digit: ");
        scanf("%d", &decimal);
        printf("Octal: ");
        if (decimal < 0)
        {
            printf("Negative integer is not supported !\n");
        }
        else
        {
            octal(decimal);
        }
        break;

    case 3:
        printf("\nenter decimal digit: ");
        scanf("%d", &decimal);
        printf("Hexadecimal: ");
        if (decimal < 0)
        {
            printf("Negative integer is not supported !\n");
        }
        else
        {
            hex(decimal);
        }
        break;
    }

    return 0;
}