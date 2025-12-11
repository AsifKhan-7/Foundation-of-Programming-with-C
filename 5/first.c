/*
    Control Instruction
1) Descision Control Instruction
2) Iterative Control Instruction
3) Switch Case Control Instruction
4) goto control

Decision Control Instruction
or
Selection Control Instruction
-----------------------------
1) if
2) if else
3) Condition operator
4) Nested if else
5) if else if
*/

/*
if
----

if(condition)
{
    //code
    //code
}

- if is a keyword
- no keyword is a function

Write a program to check whether a given number is positive or non positive.


#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive");
    }
    if(x<=0)
    {
        printf("Non Positive");
    }

    printf("\n");
    return 0;
}
    */
/*
2) if else

if(condition)
{
    //code
}
else
{
    //code
}
Write a program to check whether a given number is positive or non positive.


#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non Positive");
    }

    printf("\n");
    return 0;
}
*/
/*

    condition ? expression1 : expression2 ;

    Write a program to check whether a given number is positive or non positive.

*/
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a number");
//     scanf("%d",&x);
//     printf(x>0 ? "Positive" :"Non Positive");

//     printf("\n");
//     return 0;
// }
/*
4) Nesting

if(condition)
{
    if(condition)
    {

    }
    else
    {

    }

}
else
{
    if(condition)
    {
    }
    else
    {
    }
}


5) if else if ladder

if(condition1)
    code1
else if(condition2)
    code2
else if(condition3)
    code3
else if(condition4)
    code4
else
    code5


*/

/*WAP to check whether a given number is positivi or non-positive(Using only if())
                    if
 #include <stdio.h>
 int main() {
     int num;
     printf("Please enter any number: ");
     scanf("%d", &num);
     if (num > 0)
     {
         printf("%d is positive.", num);
     }
     if (num <= 0)
     {
         printf("%d is non-positive.", num);
     }
     return 0;
 } */

/*WAP to check whether a given number is positivi or non-positive(Using if()else() )
                          if else
#include <stdio.h>

int main() {
    int num;
     printf("Please enter any number: ");
     scanf("%d", &num);

     if(num > 0){
        printf("%d is positive.", num);
     } else {
        printf("%d is non-positive.", num);
     }
}
*/

/*
   Conditional Operator(Ternary Operator)

   condition ? expression1 : expression2;

    WAP to check whether a given number is positivi or non-positive(Using ternary operator)

 */

 #include <stdio.h>

 int main() {
    int num;
    printf("please enter any number: ");
    scanf("%d", &num);
    (num > 0) ? printf("%d, is positive.", num) : printf("%d, is non-positive.", num);


    return 0;
 }
