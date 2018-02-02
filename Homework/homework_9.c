/*
    Algorithm
    1. Describe what the program does
    2. Ask user for height of cylinder in inches
    3. Record the user's input for height in inches
    4. Ask user for radius of cylinder in inches
    5. Record the user's input for radius in inches
    6. Compute value for volume (formula: pi*height*radius*radius)
    7. Display user inputs and the volume of cylinder in cubic inches
    8. Terminate
*/

#include <stdio.h>
#define PI 3.14159

void function_1(void);
float function_2(void);
float function_3(void);
float function_4(float, float);
void function_5(float, float, float);

int main( void )
{
      //Local variables for main( ) declared below
      float height = 0.0, radius = 0.0, volume = 0.0;

      //1. Describe what the program does
      function_1();

      //2. Ask user for height of cylinder in inches
      //3. Record the user's input for height in inches
      height = function_2();

      //4. Ask user for radius of cylinder in inches
      //5. Record the user's input for radius in inches
      radius = function_3();

      //6. Compute value for volume (formula: pi*height*radius*radius)
      volume = function_4(height, radius);

      //7. Display user inputs and the volume of cylinder in cubic inches
      function_5(height, radius, volume);

      //8. Terminate
      return (0);
}

void function_1(void)
{
      printf("\nThis program calculates the volume of a cylinder.\n");
      return ;
}

float function_2(void)
{
      float get_height = 0.0;
      printf("\nPlease enter height of cylinder in inches > ");
      scanf("%f", &get_height);
      return get_height;
}

float function_3(void)
{
      float get_radius = 0.0;
      printf("Please enter radius of cylinder in inches > ");
      scanf("%f", &get_radius);
      return get_radius;
}

float function_4(float height, float radius)
{
      return PI * height * radius * radius;
}

void function_5(float height, float radius, float volume)
{
      printf("\nHeight: %.3f inches", height);
      printf("\nRadius: %.3f inches", radius);
      printf("\nCylinder Volume: %.3f cubic inches\n", volume);
      return ;
}
