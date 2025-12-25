#include<stdio.h>
//Q1
int main()
{
    int n,i=1,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int n,i=1,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+2*i;
        i++;
    }
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int n,i=1,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+2*i-1;
        i++;
    }
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int n,i=1,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i*i;
        i++;
    }
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int n,i=1,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i*i*i;
        i++;
    }
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}