/*
Write a C program that reads three integers and sorts the numbers in ascending order. Print the original numbers and the sorted numbers.
Sample Output:
Input 3 integers: 17
-5
25

---------------------------
Original numbers: 17, -5, 25
Sorted numbers: -5, 17, 25
*/
#include <stdio.h>
#include <math.h>

int main (){

  int x, y, z;
  printf("Input 3 integers: ");
  scanf("%d %d %d", &x, &y, &z);
  printf("\n---------------------------\n");
  printf("Original numbers: %d, %d, %d",x,y,z);
  printf("\nSorted numbers: ");
  if (x <= y && y <= z){
    printf("%d, %d, %d",x,y,z);
  }
  else{

    if (x <= z && z <= y){
      printf("%d, %d, %d",x,z,y);
    }
    else{

      if (y <= x && x <= z){
        printf("%d, %d, %d",y,x,z);
      }
      else{

        if (y <= z && z <= x){
         printf("%d, %d, %d",y,z,x);
        }
        else{

          if (z <= x && x <= y){
            printf("%d, %d, %d",z,x,y);
          }
          else{
            if (x == y && y == z){
              printf("%d, %d, %d",x,y,z);
            }
            else{
              printf("%d, %d, %d",z,y,x);
            }
          }
        }
      }
    }
}
}

