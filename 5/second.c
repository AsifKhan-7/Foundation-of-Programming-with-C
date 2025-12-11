/*
Control Statements
1) Decision Control
2) Iterative Control
3) Switch Case Control
4) goto Control

Iterative Control Statements
(Loop)
1) while
2) do while
3) for




#include<stdio.h>
int main()
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
    while(condition)
    {
        printf("4\n");
        printf("5\n");
        printf("6\n");
    }

    printf("7\n");
    printf("8\n");
    printf("\n");
    return 0;
}
    */

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d MySirG\n",i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main() {
    int i = 1;

    do
    {
        printf("%d - MySirg\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
