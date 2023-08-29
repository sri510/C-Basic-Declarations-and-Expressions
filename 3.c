/*
Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
Sample Input: 538453
Sample Output:
Input a number: The number of threes in the said number is 2
*/
#include<stdio.h>
int count_three( int );


int main()
{
    int num;   
    printf( "Input a number: " );
    scanf("%d", &num);    
    printf("The number of threes in the said number is %d\n", count_three(num) );
    return 0;
}

int count_three(int num) 
{
    int ctr = 0;
    int remainder;
    
    while(num > 0) {
        remainder = num % 10;
        num /= 10;
        
        if(remainder == 3)
            ctr++;
    }
    
    return ctr;
}
