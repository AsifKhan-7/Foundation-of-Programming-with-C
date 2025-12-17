#include<stdio.h>
/*
//Q1
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99 && x<1000 || x>-1000 && x<-99)
        printf("three digit number");
    else
        printf("not a three digit number");
    printf("\n");
    return 0;
}
    
//Q2
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
    printf("\n");
    return 0;
}
    
//Q3
int main()
{
    int a,b,c,d;
    printf("Enter values of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Real and Distinct Roots");
    else if(d<0)
        printf("Imaginary Roots");
    else
        printf("Real and Equal Roots");
    printf("\n");
    return 0;
}
*/
//Q4
int main()
{
    int year;
    printf("Enter year number");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
    else
    {
        if(year%4==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
    printf("\n");
    return 0;
}

//Q5
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b? a>c?a:c : b>c?b:c);

        
    printf("\n");
    return 0;
}
