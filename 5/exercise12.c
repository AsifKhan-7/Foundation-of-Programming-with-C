#include<stdio.h>

int main() {
  /*
    WAP to print MySriG N times on the screen.
   */

  /* int number;
  printf("Please enter any number: ");
  scanf("%d", &number);
   int i = 1;
  while (i <= number)
  {
    printf("%d: MySirG", i);
    printf("\n");
    i++;
  } */

  /*
    WAP to print first N natural numbers.
   */

  /* int number;
    printf("Please enter any number: ");
    scanf("%d", &number);
    int i = 1;
  while (i <= number)
  {
    printf("%d is a natural number ", i);
    printf("\n");
    i++;
  } */

  /*
    WAP to print the first N odd natural numbers.
   */
  /* int i = 1, count = 1, number;
  printf("Please enter any number: ");
  scanf("%d", &number);

  while (count <= number)
  {
    if(i % 2 != 0) {
      printf("%d is a odd natural number.", i);
      printf("\n");
      count++;
    }
    i++;
  } */

  /*
    WAP to print the first N even natural numbers.
   */
  /* int i = 1, count = 1, number;
  printf("Please enter any number: ");
  scanf("%d", &number);

  while (count <= number)
  {
    if(i % 2 == 0) {
      printf("%d is an even natural number.", i);
      printf("\n");
      count++;
    }
    i++;
  } */

  /*
    WAP to print squares of the first N natural numbers.
   */

  /* int i = 1, number, square;
  printf("Please enter any number: ");
  scanf("%d", &number);

  while (i <= number)
  {
    square = i * i;
    printf("Sqaure of %d is: %d", i, square);
    printf("\n");
    i++;
  } */

  /*
     WAP to print cubes of the first N natural numbers.
   */

  /* int i = 1, number, cube;
  printf("Please enter any number: ");
  scanf("%d", &number);

  while (i <= number)
  {
    cube = i * i * i;
    printf("Cube of %d is: %d", i, cube);
    printf("\n");
    i++;
  } */

  /*
    WAP to print a table of N.
   */

  /* int i = 1, table;
  printf("Please enter any number: ");
  scanf("%d", &table);
   while(i <= 10) {

    printf("%d", table * i);
    printf("\n");
    i++;
   } */

   /*
      WAP to print the first N odd natural numbers in reverse order.
    */
   /* int number, i, count;
    printf("Please enter any number: ");
    scanf("%d", &number);
   i = (number * 2) - 1, count = number;


    while (count >= 1)
    {
      if (i % 2 != 0)
      {
        printf("Reverse odd natural number %d", i);
        printf("\n");
        count--;
      }
      i--;
    } */

  /*
      WAP to print the first N even natural numbers in reverse order.
   */

   /* int number, i, count;
    printf("Please enter any number: ");
    scanf("%d", &number);
   i = (number * 2), count = number;


    while (count >= 1)
    {
      if (i % 2 == 0)
      {
        printf("Reverse odd natural number %d", i);
        printf("\n");
        count--;
      }
      i--;
    } */

    /*
      WAP to print the first N natural numbers in reverse order.
     */

     /*int i, number;
     printf("Please enter any number: ");
     scanf("%d", &number);
     i = number;

     while(i >= 1) {
      printf("Reverse natural number: %d", i);
      printf("\n");
      i--;
     }*/

  printf("\n");
  return 0;
}
