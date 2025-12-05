/*
Action Statements
-----------------
1) I/O instruction
2) Arithmetic instruction
3) Constrol Instruction

Input output Instruction

Output Instruction
------------------

- C language is a case sensitive language
    Printf(), PRINTF(), printf() are different
- printf() is a predefined function
- printf is used to print 
    -- text             
    -- variable data 
    -- Expression value
    on the screen (console)

printf()
{
    //code
}

We do not need to define the printf function because it is predefined. We only have to call printf function in order to use it.

Example
    printf("Welcome");

*/

/*
Write a program to print Welcome on the screen.

#include<stdio.h>
int main()
{
    printf("Welcome");
    printf("\n");
    return 0;
}
*/
/*
Write a program to print Welcome Students on the screen.

#include<stdio.h>
int main()
{
    printf("Welcome Students");
    printf("\n");
    return 0;
}
*/
/*
Escape Sequence 
-----------------

\n  New Line
\t  Tab space
\b  Backspace
\"  Print "
\'  Print '
\\  Print \

Write a program to print Welcome on the first line and Students on the second line.

#include<stdio.h>
int main()
{
    printf("Welcome\nStudents");
    printf("\n");
    return 0;
}
    */

/*
Format Specifier
----------------
%d  int
%c  char
%f  float
%lf double

Write a program to print value of a variable on the screen.

#include<stdio.h>
int main()
{
    int a=500,b=100;
    printf("%d and %d",a,b);
    printf("\n");
    return 0;
}
*/

/*
Write a program to print value of an expression on the screen.
*/
#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("Sum of %d and %d is %d",a,b,a+b);
    printf("\n");
    return 0;
}

