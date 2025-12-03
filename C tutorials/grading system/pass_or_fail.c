#include<stdio.h>
int main()
{    
    printf("ENTER MARKS : ");
    int mark;
    scanf("%d",        &mark);   // see blank spaces doesn't effect on code

// if(mark >=33)
// {
//     printf("PASSED \n");
// }
// else {
//     printf("FAILED\n");
// }


 // using ternary;;

mark<=33? printf("FAILED\n"):printf("PASSED\n");



    return 0;
}