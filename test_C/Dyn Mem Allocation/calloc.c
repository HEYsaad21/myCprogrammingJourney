#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    printf("without assigning values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    } // initialises with 0;

    printf("\n\n");
    printf("after assigning values:\n");

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    } // assigning values

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }


    free(ptr);
}