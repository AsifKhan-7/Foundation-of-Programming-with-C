#include<stdio.h>
/*
//Q1
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("sum is %d",x/100+x/10%10+x%10);
    printf("\n");
    return 0;
}
    
//Q2
int main()
{
    char ch='+';
    printf("%c %d",ch,ch);
    printf("\n");
    return 0;
}

//Q3
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int variable: %d",sizeof(a));
    printf("\nSize of float variable: %d",sizeof(b));
    printf("\nSize of double variable: %d",sizeof(c));
    printf("\nSize of char variable: %d",sizeof(d));
    printf("\n");
    return 0;
}

//Q4
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x=x/10*10;
    printf("x=%d",x);
    printf("\n");
    return 0;
}
*/
//Q5
int main()
{
    int num,digit;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Enter a digit");
    scanf("%d",&digit);
    num=num*10+digit;
    printf("%d",num);
    printf("\n");
    return 0;
}