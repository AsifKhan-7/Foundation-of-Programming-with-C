#include<stdio.h>

int main()
{
   /*
     WAP which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
    */
  /* float costPrice, sellingPrice, profit, loss, percentage;
  printf("Please enter cost price: ");
  scanf("%f", &costPrice);
  printf("Please enter selling price: ");
  scanf("%f", &sellingPrice);

  if (sellingPrice > costPrice) {
    profit = sellingPrice - costPrice;
    percentage = (profit / costPrice) * 100;
    printf("Profit: %f%%", percentage);

  } else if(sellingPrice < costPrice) {
    loss = costPrice - sellingPrice;
    percentage = (loss / costPrice) * 100;
    printf("Loss: %f%%", percentage);
  } else {
    printf("No profit, no loss");
  } */

  /*
    WAP to take marks of 5 subjets from the user. Assume marks are given out of 100 and passing marks are 33. Now display whether the candidate passed the examination or fail.
   */

   /* int marksOfHindi, marksOfEnglish, marksOfMaths, marksOfScience, marksOfComputerScience;
   printf("Please enter your marks of Hindi: ");
   scanf("%d", &marksOfHindi);
   printf("Please enter your marks of English: ");
   scanf("%d", &marksOfEnglish);
   printf("Please enter your marks of Maths: ");
   scanf("%d", &marksOfMaths);
   printf("Please enter your marks of Science: ");
   scanf("%d", &marksOfScience);
   printf("Please enter your marks of Computer Science: ");
   scanf("%d", &marksOfComputerScience);

   if(marksOfHindi >= 33 && marksOfEnglish >= 33 && marksOfMaths >= 33 && marksOfScience >= 33 && marksOfComputerScience >= 33) {
    printf("Congratulations! You have Passed.");
   } else {
    printf("You have been failed.");
   } */

   /*
     WAP to check whether a given alphabet is in uppercase or lowercase.
    */

   /* char anyCharacter;
    printf("Please give any A-Z/a-z character: ");
    scanf("%c", &anyCharacter);

    if (anyCharacter >= 65 && anyCharacter <= 90)
    {
      printf("It is a uppercase alphabet: %c", anyCharacter);
    } else if(anyCharacter >= 97 && anyCharacter <= 122)
    {
      printf("It is a lowercase alphabet: %c", anyCharacter);
    } else
    {
      printf("It is an invalid alphabet: %c", anyCharacter);
    } */

    /* Another way
    if (anyCharacter >= 'A' && anyCharacter <= 'Z') {
      printf("It is a Uppercase alphabet: %c", anyCharacter);
    } else if(anyCharacter >= 'a' && anyCharacter <= 'z'){
      printf("It is a lowercase alphabet: %c", anyCharacter);
    } else {
      printf("It is an invalid alphabet: %c", anyCharacter);
    } */

    /*
      WAP to check whether a given number is divisible by 3 and divisible by 2
     */

    /* int anyNumber;
     printf("Please enter any number: ");
     scanf("%d", &anyNumber);

     if (anyNumber % 3 == 0 && anyNumber % 2 == 0)
     {
      printf("Number is divisible by 3 and 2: %d", anyNumber);
     } else {
      printf("Number is not divisible by 3 and 2: %d", anyNumber);
     } */


      /*
      WAP to check whether a given number is divisible by 7 or divisible by 3
     */
    int anyNumber;
     printf("Please enter any number: ");
     scanf("%d", &anyNumber);

     if (anyNumber % 7 == 0 || anyNumber % 3 == 0)
     {
      printf("Number is divisible by 7 or 3: %d", anyNumber);
     } else {
      printf("Number is not divisible by 7 and 3: %d", anyNumber);
     }

  printf("\n");
  return 0;
}
