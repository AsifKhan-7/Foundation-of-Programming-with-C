#include<stdio.h>
/*
//Q1
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>0)
        printf("Positive");
    else if(num<0)
        printf("Negative");
    else 
        printf("Zero");
    printf("\n");
    return 0;
}
    
//Q2
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("Uppercase Alphabet");
    else if(ch>='a'&& ch<='z')
        printf("Lowercase Alphabet");
    else if(ch>='0'&&ch<='9')
        printf("Digit");
    else
        printf("Special Character");
    printf("\n");
    return 0;
}

//Q3
int main()
{
    float a,b,c;
    printf("Enter lengths of sides of a triangle:");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
    printf("\n");
    return 0;
}
    */
//Q4
int main()
{
    int m;
    printf("Enter month number");
    scanf("%d",&m);
    if(m==2)
        printf("28 or 29 days");
    else if(m==4||m==6||m==9||m==11)
        printf("30 days");
    else if(m<1||m>12)
        printf("Invlid month number");
    else
        printf("31 days");
    printf("\n");
    return 0;
}