/*
Write a C program that takes two integers and tests whether they are multiplied or not.
In science, a multiple is the product of any quantity and an integer. In other words, for the quantities a and b, we say that b is a multiple of a if b = na for some integer n, which is called the multiplier. If a is not zero, this is equivalent to saying that b/a is an integer.
Sample Output:
Input two integers:
3
9
Multiplies
*/
#include <stdio.h>

int main () {

unsigned short int x, y, multi;
printf("Input two integers: \n");
scanf("%hd %hd", &x, &y);

if (x > y){

  multi = x%y;
  if ( multi == 0){

    printf("Multiplies\n");
  }
  else{

    printf("Not Multiplies\n");

  }
}
else{

  multi = y%x;
  if (multi == 0){

   printf("Multiplies\n");

  }
  else{

    printf("Not Multiplies\n"); 

    }
   }
}
