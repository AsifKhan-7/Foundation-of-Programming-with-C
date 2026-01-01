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

      /* int i = 2, isPrime = 1, number;
      printf("Please enter any number: ");
      scanf("%d", &number);
      if(number == 1 || number <= 0) {
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
      } */

      /*
        WAP to calculate LCM of two numbers.
       */

       /* int a, b, LCM, max;
       printf("Enter 1st number: ");
       scanf("%d", &a);
       printf("Enter 2nd number: ");
       scanf("%d", &b);

       if(a <= 0 || b <= 0) {
        printf("Invalid number.");
        return 0;
       }

       if(a > b){
        max = a;
       } else {
        max = b;
       }
        LCM = max;
       while(1) {

        if(LCM % a == 0 && LCM % b == 0){
          printf("%d is LCM.", LCM);
          break;
        } else{
          LCM += max;
        }
       } */

  /*
    WAP to reverse a given number.
   */

   /* int n, lastDigit, temp, reverseNumber = 0;
   printf("Please enter any number: ");
   scanf("%d", &n);
  temp = n;

  //  while(n > 0) { Only for positive numbers
   while(n != 0) {

     lastDigit = n % 10;
     reverseNumber = (reverseNumber * 10) + lastDigit;
     n = n / 10;
    }
    // printf("Reverse number is: %d",reverseNumber);
    printf("Reverse number of %d is %d.", temp, reverseNumber); */


  printf("\n");
  return 0;
}
