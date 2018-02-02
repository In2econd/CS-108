/*
  Algorithm
  Step 1: Prompt user to enter an integer
  Step 2: Get input from user and store the integer
  Step 3: Prompt user to enter another integer
  Step 4: Get input from user and store the second integer
  Step 5: Print the two integers the user entered
  Step 6: Sum the two integers (int1 + int2)
  Step 7: Display the sum to the user
  Step 8: Subtract the first integer from the second integer and store it
  Step 9: Display the integer produced by Step 8
  Step 10: Get the product of the two integers (int1 * int2)
  Step 11: Display the product of the two integers
  Step 12: Divide the second integer by the first integer and store it
  Step 13: Display the result produced by Step 12
  Step 14: Terminate
*/

#include <stdio.h>

int main(void)
{
    //Declare Variables
    int int1 = 0, int2 = 0, sum = 0, difference = 0, product = 0;
    float divide = 0.0;

    //Step 1 - Ask user for integer
    printf("\nPlease enter an integer: ");

    //Step 2 - Get integer from user
    scanf("%d", &int1);

    //Step 3 - Ask user for another integer
    printf("\nPlease enter another integer: ");

    //Step 4 - Get second integer from user
    scanf("%d", &int2);

    //Step 5 - Display the integers
    printf("\n\nYou entered %d followed by %d", int1, int2);

    //Step 6 - Sum two integers
    sum = int1 + int2;

    //Step 7 - Display the sum
    printf("\nThe sum of the two integers is %d", sum);

    //Step 8 - Subtract first integer from second integer
    difference = int2 - int1;

    //Step 9 - Display the difference
    printf("\nThe first integer subtracted from the second integer produces %d", difference);

    //Step 10 - Multiply the two integers together
    product = int1 * int2;

    //Step 11 - Display the product
    printf("\nThe two integers multiplied together produce %d", product);

    //Step 12 - Divide second integer by first integer
    divide = (float)int2 / int1;

    //Step 13 - Display division result
    printf("\nThe second integer divided by the first integer produces %.2f\n", divide);

    //Step 14 - Terminate
    return 0;
}
