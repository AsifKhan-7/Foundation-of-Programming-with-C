/*
switch case control

 - switch and case are keywords

 switch(variable or expression)
 {
    case constant1:
        code
        code
    case constant2:
        code
        code
        break;
    case constant3:
        code
        code

    default:
        code

 }
*/

/* #include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;


    while(1)
    {
        system("clear");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Exit");
        printf("\n\nEnter your choice ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("\nEnter two numbers");
                scanf("%d%d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4:
                exit(0);

            default:
                printf("\nInvalid ");
        }
    }
    printf("\nEnd of program");
    printf("\n");
    return 0;

} */

#include<stdio.h>
#include<stdlib.h>
int main() {
    int x, a, b;


    while(1) {
        // system("cls");
        printf("1: Addition\n");
        printf("2: Subtraction\n");
        printf("3: Multiplication\n");
        printf("4: Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &x);

        switch(x)
        {
            case 1:
            printf("Please enter first number: ");
            scanf("%d", &a);
            printf("Please enter second number: ");
            scanf("%d", &b);
            printf("Addition is: %d\n", a + b);
            break;

            case 2:
            printf("Please enter first number: ");
            scanf("%d", &a);
            printf("Please enter second number: ");
            scanf("%d", &b);
            printf("Difference is: %d\n", a - b);
            break;

            case 3:
            printf("Please enter first number: ");
            scanf("%d", &a);
            printf("Please enter second number: ");
            scanf("%d", &b);
            printf("Product is: %d\n", a * b);
            break;

            case 4:
            exit(0);

            default:
            printf("Invalid\n");
        }
    }
    printf("End of program");

    return 0;
}
