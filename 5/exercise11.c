#include<stdio.h>

int main() {

  /*
    WAP to print MySirG 5 times on the screen.
   */

   /* int i = 1;
   while (i <= 5)
   {
    printf("MySirG: %d", i);
    printf("\n");
    i++;
   } */

   /*
     WAP to print the first 10 natural numbers.
    */
   /* int i = 1;

   while (i <= 10)
   {
    printf("%d", i);
    printf("\n");
    i++;
   } */

   /*
     WAP to print the first 10 natural numbers in reverse order.
    */

    /* int i = 10;

    while (i >= 1)
    {
      printf("%d", i);
      printf("\n");
      i--;
    } */

  /*
    WAP to print the first 10 odd natural numbers.
   */

   /*int i = 1, count = 1;

   while (count <= 10)
   {
    if (i % 2 != 0) {
      printf("Odd natural number: %d", i);
      printf("\n");
      count++;
    }
    i++;
   } */

   /*
      WAP to print the first 10 odd natural numbers in reverse order.
    */

   /* int i = (10 * 2) - 1, count = 10;

    while (count >= 1)
    {
      if (i % 2 != 0)
      {
        printf("%dth odd natural number: %d", count, i);
        printf("\n");
        count--;
      }
      i--;
    } */

    /* OR Optimize
    int i = (10 * 2) - 1, count = 10;

    while (count >= 1)
    {
      printf("%d", i);
      printf("\n");
      count --;
      i -= 2;
    } */

   /*
     WAP to print the first 10 even natural numbers.
    */

  /* int i = 1, count = 1;

  while( count <= 10) {
    if (i % 2 == 0)
    {
      printf("Even natural numbers: %d", i);
      printf("\n");
      count++;
    }
    i++;
  } */

    /*
     WAP to print the first 10 even natural numbers in reverse order.
     */

    /* int i = (10 * 2) - 1, count = 10;

     while (count >= 1)
     {
      if (i % 2 == 0)
      {
       printf("%dth even natural number: %d", count, i);
       printf("\n");
       count--;
      }
      i--;
     } */

    /*
      WAP to print squares of the first 10 natural numbers.
     */

    /* int i = 1, square = 1;

     while (i <= 10)
     {
      square = i * i;
      printf("Square of %d is: %d", i, square);
      printf("\n");
      i++;
     } */


    /*
      WAP to print cubes of the first 10 natural numbers.
     */

    /* int i = 1, cube = 1;

     while (i <= 10)
     {
      cube = i * i * i;
      printf("Cube of %d is: %d", i, cube);
      printf("\n");
      i++;
     } */

     /*
       WAP to print a table of 5.
      */

      /* int i = 1;

      while (i <= 10)
      {
        printf("%d", 5 * i);
        printf("\n");
        i++;
      } */


  printf("\n");
  return 0;
}
