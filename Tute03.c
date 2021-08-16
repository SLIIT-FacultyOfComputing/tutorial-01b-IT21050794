/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
int i;
int num, sumOfNums = 0;

printf("Number : ");
scanf("%d", &num);

for (i = 1; i <= num; i++)
  {
  sumOfNums += i;
  }

printf("Sum of 1 to %d = %d", num, sumOfNums);

return 0;
}