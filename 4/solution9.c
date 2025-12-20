#include<stdio.h>
/*
//Q1
int main()
{
    float cp,sp,per;
    printf("Enter cp and sp of a product: ");
    scanf("%f%f",&cp,&sp);
    if(cp<=sp) //profit
    {
        per=(sp-cp)/cp *100;
        printf("Profit Percentage: %.2f%%",per);
    }
    else //Loss
    {
        per=(cp-sp)/cp*100;
        printf("Loss Percentage: %.2f%%",per);
    }
    printf("\n");
    return 0;
}

//Q2
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of 5 subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("Result: PASS");
    else
        printf("Result: FAIL");
    printf("\n");
    return 0;
}

//Q3
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("Uppercase Alphabet");
    else if(ch>='a'&& ch<='z')
        printf("Lowercase Alphabet");
    else
        printf("Not an alphabet");
    printf("\n");
    return 0;
}
    
//Q4
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
        printf("Divisible by 3 and 2 both");
    else
        printf("Not divisible by 3 and 2 both");
    printf("\n");
    return 0;
}
    */
//Q5
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%7==0||num%3==0)
        printf("Divisible by 7 or 3 or both");
    else 
        printf("Not divisible by 7 or 3");
    printf("\n");
    return 0;
}