#include<stdio.h>

int main() {
  /*
    WAP to calculate sum of N natural numbers.
   */
/* int i = 1, sum = 0, number;
 printf("Please enter any number: ");
 scanf("%d", &number);

 while(i <= number) {
  sum  += i;
  i++;
 }
  printf("Sum of %d natural numbers = %d", number, sum);
  printf("\n"); */

  /*
    WAP to calculate the sum of first N even natural numbers.
   */

  /* int i = 1, sum = 0, count = 1, number;
   printf("Please enter any natural number: ");
   scanf("%d", &number);

   while (count <= number)
   {
    if(i % 2 == 0) {
      sum += i;
      count++;
    }
    i++;
   }
   printf("Sum of %d even natural numbers = %d", number, sum);
   printf("\n"); */

   /*
     WAP to calculate the sum of first N odd natural numbers.
    */

  /* int i = 1, sum = 0, count = 1, number;
   printf("Please enter any natural number: ");
   scanf("%d", &number);

   while (count <= number)
   {
    if(i % 2 != 0) {
      sum += i;
      count++;
    }
    i++;
   }
   printf("Sum of %d odd natural numbers = %d", number, sum);
   printf("\n"); */

   /*
     WAP to calculate the sum of squares of first N natural numbers.
    */
  /* int i = 1, sum = 0, number;
  printf("Please enter any natural number: ");
  scanf("%d", &number);



  while (i <= number)
  {
    sum = sum + i * i;
    i++;
  }
  printf("Sum of squares of first %d natural numbers = %d", number, sum); */

  /*
     WAP to calculate the sum of cubes of first N natural numbers.
   */

  /* int i = 1, sum = 0, number;
  printf("Please enter any natural number: ");
  scanf("%d", &number);

  while (i <= number)
  {
    sum = sum + i * i * i;
    i++;
  }
  printf("Sum of cubes of first %d natural numbers = %d", number, sum); */

  int i = 2, n;
  printf("Please enter any number: ");
  scanf("%d", &n);
  if(n == 1 || n <= 0) {
    printf("%d is not a prime number.", n);
  }
  if(n == 2) {
    printf("%d is a prime number.", n);
  }

  while(i <= n-1) {
    if(n % i == 0) {
      printf("%d is not a prime number.", n);
      break;
    }
    i++;
    if(i == n) {
      printf("%d is a prime number.", i);
    }
  }

  printf("\n");
  return 0;
}
