/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
float s1, s2, avg;
	
printf("Enter Marks\n");

printf("\tSubject 1 : ");
scanf("%f", &s1);
printf("\tSubject 2 : ");
scanf("%f", &s2);

avg = (s1 + s2) / 2;

printf("Average marks = %.2f", avg);
  
return 0;
}