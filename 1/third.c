/*
Action Statements
-----------------
1) I/O instruction
2) Arithmetic instruction
3) Constrol Instruction

Input output Instruction

Input Instruction
------------------

- scanf() is a predefined function
- Declaration of scanf() function reside in stdio.h

    int a;
    scanf("%d",&a);



*/

/*
Write a program to take a number from the keyboard and display it.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("a=%d",a);

    printf("\n");
    return 0;
}
*/
/*
Write a program to take a number from the user and display its square.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    b=a*a;
    printf("Square of %d is %d",a,b);

    printf("\n");
    return 0;
}
    */

/*
Write a program to take two numbers from the user and display their sum.
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Sum is %d",a+b);

    printf("\n");
    return 0;
}