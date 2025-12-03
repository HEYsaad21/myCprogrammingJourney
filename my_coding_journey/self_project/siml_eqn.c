#include <stdio.h>

float Det3x3(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
{

    float Det = (float)(a1 * (b2 * c3 - b3 * c2) + b1 * (a3 * c2 - a2 * c3) + c1 * (a2 * b3 - b2 * a3));

    return Det;
}

float Det2x2(float a1, float a2, float b1, float b2)
{
    float Det = (float)(a1 * b2 - a2 * b1);

    return Det;
}

int main()
{
    int choice;
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3;

    printf("\n\tSIMULTANEOUS EQUATION \n");

    printf("\nchose number of variable (2,3)\nPress 0 to exit: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("\nEQN : ax+by=c\n");
        printf("a1: ");
        scanf("%f", &a1);
        printf("b1: ");
        scanf("%f", &b1);
        printf("c1: ");
        scanf("%f", &c1);

        printf("a2: ");
        scanf("%f", &a2);
        printf("b2: ");
        scanf("%f", &b2);
        printf("c2: ");
        scanf("%f", &c2);

        float D, Dx, Dy, x, y;

        D = Det2x2(a1, a2, b1, b2);
        Dx = Det2x2(c1, c2, b1, b2);
        Dy = Det2x2(a1, a2, c1, c2);

        if (D == 0)
        {
            printf("\nNO SOLUTION FOUND !");
        }
        else
        {
            x = (float)Dx / D;
            y = (float)Dy / D;

            printf("\nsolution:\nx=%.4f , y=%.4f", x, y);
        }
    }
    else if (choice == 3)
    {
        printf("\nEQN : ax+by+cz=d\n");
        printf("a1: ");
        scanf("%f", &a1);
        printf("b1: ");
        scanf("%f", &b1);
        printf("c1: ");
        scanf("%f", &c1);
        printf("d1: ");
        scanf("%f", &d1);

        printf("a2: ");
        scanf("%f", &a2);
        printf("b2: ");
        scanf("%f", &b2);
        printf("c2: ");
        scanf("%f", &c2);
        printf("d2: ");
        scanf("%f", &d2);

        printf("a3: ");
        scanf("%f", &a3);
        printf("b3: ");
        scanf("%f", &b3);
        printf("c3: ");
        scanf("%f", &c3);
        printf("d3: ");
        scanf("%f", &d3);

        float D, Dx, Dy, Dz, x, y, z;

        D = Det3x3(a1, a2, a3, b1, b2, b3, c1, c2, c3);
        Dx = Det3x3(d1, d2, d3, b1, b2, b3, c1, c2, c3);
        Dy = Det3x3(a1, a2, a3, d1, d2, d3, c1, c2, c3);
        Dz = Det3x3(a1, a2, a3, b1, b2, b3, d1, d2, d3);

        if (D == 0)
        {
            printf("\nNO SOLUTION FOUND !");
        }
        else
        {

            x = (float)Dx / D;
            y = (float)Dy / D;
            z = (float)Dz / D;

            printf("\nsolution:\nx=%.4f , y=%.4f , z=%.4f", x, y, z);
        }
    }
    else if (choice == 0)
    {
        printf("\n\n");
    }
    else
    {
        printf("\nInvalid input");
    }
}