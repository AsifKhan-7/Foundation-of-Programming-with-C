#include <stdio.h>

int main() {

  //Exercise - 1

//WAP to calculate size of a character constant

    /*char character;
    int sizeOfCharacter;
      printf("Please enter any character: ");
      scanf("%c", &character);
      sizeOfCharacter = sizeof(character);
      printf("Size of character %c is: %d ",character, sizeOfCharacter);*/


      //WAP to calculate size of a Real constant

      /*double realConstant;
      int sizeOfRealConstant;
      printf("Please enter any real constant: ");
      scanf("%lf", &realConstant);
      sizeOfRealConstant = sizeof(realConstant);
      printf("Size of real constant %lf is: %d", realConstant, sizeOfRealConstant);*/


      //WAP with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

      /*char typeOfVariable = 'A';
      typeOfVariable++;
      printf("Now the changed character is: %c", typeOfVariable);*/

      //WAP to swap values of two int variables

      /*int a = 65, b = 66, temp;
      temp = a;
      a = b;
      b = temp;
      printf("Now a is: %d and b is: %d", a, b);*/

      //WAP to swap values of two int variables without using third variable
      /*int a = 990, b = 97;

      a = a + b;
      b = a - b;
      a = a - b;
      printf("Now a is: %d\n", a);
      printf("Now b is: %d", b);*/

      //WAP to swap values of two int variables without using third variable and +,- operators.
      /*int firstNumber, secondNumber, total;
      printf("Please enter first number: ");
      scanf("%d", &firstNumber);
      printf("Please enter second number: ");
      scanf("%d", &secondNumber);
      total = firstNumber * secondNumber;
      printf("Now the total is: %d\n", total);
      secondNumber = total / secondNumber;
      printf("Swapped second number: %d\n", secondNumber);
      firstNumber = total / secondNumber;
      printf("Swapped first number: %d\n", firstNumber);
      printf("Now first number is: %d and Second number is: %d", firstNumber, secondNumber);
      printf("\n");*/

      //WAP to swap values of two int variables without using third variable & arithmetic operators

     /*int a,b;
      printf("Please enter number:");
      scanf("%d", &a);
      printf("Please enter number: ");
      scanf("%d", &b);
      a = a ^ b;
      b = a ^ b;
      a = a ^ b;
      printf("Now a is: %d and b is: %d", a, b);*/

      //WAP to swap values of two int variables in single line arithmetic expression

      int a, b;
      printf("Please enter number: ");
      scanf("%d", &a);
      printf("Please enter number: ");
      scanf("%d", &b);
      a = (a + b) - (b = a);
      printf("Now a is: %d and b is: %d", a, b);

      return 0;
}



