// WAP to input a three digit number and display the sum of digits

#include <stdio.h>

// int main() {
//   int num = 456, rem,sum = 0;
//   rem = num % 10;
//   sum += rem;
//   num = num / 10;

//   rem = num % 10;
//   sum += rem;
//   num = num / 10;

//   rem = num % 10;
//   sum += rem;
//   num = num / 10;
//   printf("Sum: %d", sum);
//   printf("\n");
//   return 0;


  int main()
  {
  int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("sum is %d",x/100+x/10%10+x%10);
    printf("\n");
    return 0;
}
// }

