/*
Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.
Sample Input:12
15
24
888
Sample Output:
Input each number on a separate line (888 to exit):

The average value of the said numbers is 17.000000
*/
#include<stdio.h>
int main()
{
    int ctr = 0, n;
    int sum = 0;
    float avg_value = 0;
    
    printf("Input each number on a separate line (888 to exit):\n");
    scanf("%d", &n);
    
    while(n != 888) {
        sum += n;
        ctr++;
        scanf("%d", &n);
    }    
    if(ctr)
        avg_value = (float) sum / ctr;
    
    printf("\nThe average value of the said numbers is %f\n", avg_value);
    
    return 0;
}
