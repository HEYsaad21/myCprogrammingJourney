#include<stdio.h>
int main()
{    
    printf("ENTER MARKS : "); //The Canadian University Grading System - GOOGLE
    int mark;
    scanf("%d",        &mark);   // see blank spaces don't effect on code

    
if(mark>100){printf("NOT A VALID INPUT\n");}
else if(mark >=33)
{
    printf("PASSED \n");

if((mark>=90)&&(mark<=100)){printf("A++\n");}
else if((mark>=80)&&(mark<=89)){printf("A\n");}
else if((mark>=70)&&(mark<=79)){printf("B\n");}
else if((mark>=60)&&(mark<=69)){printf("C\n");}
else if((mark>=50)&&(mark<=59)){printf("D\n");}

else {printf("F\n");}



}


else {
    printf("FAILED\n");
}
      
    return 0;
}