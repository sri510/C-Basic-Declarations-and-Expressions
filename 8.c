/*
There are three given ranges. Write a C program that reads a floating-point number and finds the range where it belongs from four given ranges.
Sample Output:
Input a number: 87
Range (80,100]
*/
#include <stdio.h>

int main ()
{

float x = 0;
printf("Input a number: ");
scanf("%f", &x);

if (x >= 0 && x <= 30)
  printf("Range [0,30]\n");
else if (x > 30 && x <= 50)
  printf("Range (30,50]\n");
else if (x > 50 && x <= 80)
  printf("Range (50,80]\n");
else if (x > 80 && x <= 100)
  printf("Range (80,100]\n");
else
  printf("\nNot within range..!\n");
}
