/*
1.Display a message to the user displaying the purpose of the program
2.Prompt the user to enter the x-coordinate
3.Get the user input for the x-coordinate
4.Prompt the user to enter the y-coordinate
5.Get the user input for the y-coordinate
6.Determine the location of the point usine if-else if-else
7.Display the result to the user using switch/case
8.Thank user for using program
9.Terminate
*/

#include <stdio.h>

void greet(void);
int get_x(void);
int get_y(void);
int determine_pt(int, int);
void display_result(int, int, int);

int main (void)
{
    //Declare variables
    int x = 0, y = 0, code = 0;

    //1
    greet();

    //2 and 3
    x = get_x();

    //4 and 5
    y = get_y();

    //6
    code = determine_pt(x, y);

    //7 and 8
    display_result(code, x, y);

    //9
    return 0;
}

void greet(void)
{
    printf("\nThis program gives you info about where a point lies on the Cartesian plane.");
    return ;
}

int get_x(void)
{
    int x;
    printf("\nPlease enter an integer for the X coordinate:");
    scanf("%d", &x);
    return x;
}

int get_y(void)
{
    int y;
    printf("\nPlease enter an integer for the Y coordinate:");
    scanf("%d", &y);
    return y;
}

int determine_pt(int x, int y)
{
    int code = 0;
    if (x != 0 && y !=0)
    {
        if (x < 0 && y < 0)
        {
            code = 3;  //Quadrant 3
        }
        else if (x < 0 && y > 0)
        {
            code = 2;  //Quadrant 2
        }
        else if (x > 0 && y < 0)
        {
            code = 4;  //Quadrant 4
        }
        else
        {
            code = 1;  //Quadrant 1
        }
    }
    else if (x == 0 && y != 0)
    {
        code = 5;  //Lies on Y-Axis
    }
    else if (y == 0 && x != 0)
    {
        code = 6;  //Lies on X-Axis
    }
    else if (x == 0 && y == 0)
    {
        code = 0;  //Lies on origin
    }
    else
    {
        code = 99; //Error
    }
    return code;
}

void display_result(int code, int x, int y)
{
    switch (code) {
    case 0:
        printf("\n\nThe point (%d,%d) lies on the origin.", x, y);
        break;
    case 1:
        printf("\n\nThe point (%d,%d) lies in Quadrant 1.", x, y);
        break;
    case 2:
        printf("\n\nThe point (%d,%d) lies in Quadrant 2.", x, y);
        break;
    case 3:
        printf("\n\nThe point (%d,%d) lies in Quadrant 3.", x, y);
        break;
    case 4:
        printf("\n\nThe point (%d,%d) lies in Quadrant 4.", x, y);
        break;
    case 5:
        printf("\n\nThe point (%d,%d) lies on the y-axis.", x, y);
        break;
    case 6:
        printf("\n\nThe point (%d,%d) lies on the x-axis.", x, y);
        break;
    case 99:
        printf("\n\nError");
        break;
    }
    printf("\nThanks for using my program.\n");
    return ;
}
