//IT20151492
//Warnakulasuriyage K.H.A
//Group 7.1
//Question 3
#include <stdio.h>

int main() {
  int num, a, b, c, d, e;
  int digit = 0;

  printf( "Enter five  digit number: " );
  scanf( "%d", &num );

  a = num / 10000;
  b = num / 1000 % 10;
  c = num / 100 % 10;
  d = num / 10 % 10;
  e = num % 10;

  if ( a == e && b == d ) {
    printf("NUMBER IS PALINDROME\n" );
  }

  else
  {
    printf("NUMBER IS NOT PALINDROME\n" );
  }

  return 0;
}
