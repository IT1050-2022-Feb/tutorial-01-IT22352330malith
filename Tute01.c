/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int mark1;
    int mark2;
    float avg;

    printf("Enter first mark:");
    scanf("%d",& mark1);
    printf("Enter second mark:");
    scanf("%d",& mark2);

    avg=(mark1+mark2)/2.0;

    printf("average of two subject:%.1f\n",avg);

  return 0;
}

