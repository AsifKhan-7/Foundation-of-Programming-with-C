/*
Transfer Control 
-----------------
1) break
2) continue

break
-------
 - in the body of loop
 - in the body of switch

 continue
 --------
 - in the body of loop

*/

#include<stdio.h>
/*
int main()
{
    int i=1,x;
    printf("Enter a number");
    scanf("%d",&x);
    while(i<=10)
    {
        printf("%d ",i);
        if(i==x)
            break;
        i++;
    }
    printf("\n");
    return 0;
}
   

int main()
{
    int i,x;
    for(i=1;i<=3;i++)
    {
        printf("\nEnter an even number");
        scanf("%d",&x);
        if(x%2==0)
            break;
    }
    if(i==4)
        printf("Game Over");
    else
        printf("You Win");
    printf("\n");
    return 0;
}
     */
int main()
{
    int i=1,x;
    printf("Enter 5 even numbers");
    while(i<=5)
    {
        printf("%d ",i);
        scanf("%d",&x);
        if(x%2==1)
            continue;
        i++;
    }
    printf("\n");
    return 0;
}
