/*
//Q1
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average is %f",avg);
    printf("\n");
    return 0;
}

//Q2
int main()
{
    int r;
    float c;
    printf("Enter radius");
    scanf("%d",&r);
    c=2*3.14*r;
    printf("Result is %f",c);
    printf("\n");
    return 0;
}

//Q3
int main()
{
    int p,t;
    float r,si;
    printf("Enter p,r and t");
    scanf("%d %f %d",&p,&r,&t);
    si=p*r*t/100;
    printf("SI is %f",si);
    printf("\n");
    return 0;
}

//Q4
int main()
{
    int a,b,c,V;
    printf("Enter length, breadth and height");
    scanf("%d%d%d",&a,&b,&c);
    V=a*b*c;
    printf("Volume is %d",V);
    printf("\n");
    return 0;
}
*/
//Q5
int main()
{
    float cp,sp;
    printf("Enter CP and SP of a dozen Banana");
    scanf("%f%f",&cp,&sp);
    printf("Profit/Loss=%f",25*(sp-cp)/12);

    printf("\n");
    return 0;
}
