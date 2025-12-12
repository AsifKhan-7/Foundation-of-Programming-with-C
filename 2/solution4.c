#include<stdio.h>
/*
//Q1
int main()
{
    printf("%d",sizeof('A'));
    printf("\n");
    return 0;
}
    
//Q2
int main()
{
    printf("%d",sizeof(34.5));
    printf("\n");
    return 0;
}
    
//Q3
int main()
{
    char ch='A';
    printf("%c",ch);
    ch++;
    printf("\n%c",ch);
    printf("\n");
    return 0;
}

//Q4
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}

//Q5
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}

//Q6
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}
    
//Q7
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}
*/
//Q8
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=(a+b)-(b=a);
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}
