#include<stdio.h>

int main() {

  /*
    WAP to print all Prime numbers under 100.
   */

  for(int i = 2; i < 100; i++){
    int isPrime = 1;
    // for(int j = 2; j <= i - 1; j++){ Bcoz i apne half se bade kisi number se completely divide nhi hota(without i itself)
    for(int j = 2; j <= i / 2; j++){
      if(i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if(isPrime == 1) {
      printf("%d is a prime number.", i);
      printf("\n");
    }
  }




  printf("\n");
  return 0;
}
