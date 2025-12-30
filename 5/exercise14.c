#include<stdio.h>

int main() {
  /*
  WAP to check whether a given number is a Prime Number or not.
   */

  /* int number;
   printf("Please enter any number: ");
   scanf("%d", &number);

   if(number == 2) {
    printf("%d is a prime number.", number);
   } else if(number % 1 == 0 && number % number == 0) {
    printf("%d is a prime number.", number);
   } else {
    printf("%d is not a prime number.", number);
   } */

   /*
     WAP to calculate factorial of a number.
    */

  /*  int i = 1, fact = 1, number;
    printf("Please enter any number: ");
    scanf("%d", &number);

    while(i <= number) {
      fact = fact * i;
      i++;
    }
    printf("Factorial of %d is = %d", number, fact); */

    /*
      WAP to count digits in a given number.
     */

    /* int n, count = 0;
     printf("Please enter any number: ");
     scanf("%d", &n);

     while(n > 0) {
      n = n / 10;
      count++;
     }
     printf("Digits are: %d", count); */

     /*
       WAP to check whether a given number is a Prime number or not.
      */

      int i = 2, isPrime = 1, number;
      printf("Please enter any number: ");
      scanf("%d", &number);
      if(number == 1) {
        isPrime = 0;
        printf("%d isn't prime.", number);
      }

      while(i * i <= number) {
        if(number % i == 0){
          isPrime = 0;
          printf("%d is not prime.", number);
          break;
        }
        i++;
      }
      if(isPrime == 1) {
        printf("%d is prime.", number);
      }

  printf("\n");
  return 0;
}
