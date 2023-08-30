/*
Write a C program that accepts seven floating point numbers and counts the number of positive and negative numbers. Print the average of all positive and negative values with two digits after the decimal number.
Sample Output:
Input 7 numbers(int/float):
25
35.75
15
-3.5
40
35
16

6 Number of positive numbers: Average 27.79

1 Number of negative numbers: Average -3.50
*/
#include <stdio.h>
int main () {

float x, p_avg = 0, n_avg = 0, temp_p = 0, temp_n = 0;
int i, p_ctr = 0, n_ctr = 0;
printf("Input 7 numbers(int/float):\n");
for (i = 0; i < 7; i++){

  scanf("%f", &x);
  if (x > 0)
   {
    p_ctr++;
    temp_p += x;
   }
  
  if (x < 0
  ) {
    n_ctr++;
    temp_n += x;
   }
}

p_avg = temp_p/p_ctr;

n_avg = temp_n/n_ctr;

if (p_ctr>0)
{
   printf("\n%d Number of positive numbers: ", p_ctr);
   printf("Average %.2f\n", p_avg);
}

if (n_ctr>0)
{
printf("\n%d Number of negative numbers: ", n_ctr);
printf("Average %.2f\n", n_avg);
}
}
