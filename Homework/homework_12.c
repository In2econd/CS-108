/*
1.Display a message to the user displaying the purpose of the program
2.Prompt the user to enter the x-coordinate
3.Get the user input for the x-coordinate
4.Prompt the user to enter the y-coordinate
5.Get the user input for the y-coordinate
6.Determine the location of the point using if-else if-else and return the value
    a. Are x and y not equal to 0?
        i. If so, check which qudrant the point lies in, skip if either are = 0
            1. If x is less than 0 and y is less than 0, point is in Q3
            2. If x is less than 0 and y is greater than 0, point is in Q2
            3. If x is greater than 0 and y is less than 0, point is in Q4
            4. Else (If x and y are greater than 0), point is in Q1
    b. Is x equal to 0 and y not equal to 0? Skip if not.
        i. If so, the point lies on the y-axis
    c. Is y equal to 0 and x not equal to 0? Skip if not.
        i. If so, the point lies on the x-axis
    d. Are x and y both equal to 0? Skip if not.
        i. If so, the point lies on the origin
    e. Return an error if none of the above cases are true
7.Display the result to the user using switch/case
    a. If the returned code is 0, display that the point is on the origin
    b. If the returned code is 1, display that the point is in quadrant 1
    c. If the returned code is 2, display that the point is in quadrant 2
    d. If the returned code is 3, display that the point is in quadrant 3
    e. If the returned code is 4, display that the point is in quadrant 4
    f. If the returned code is 5, display that the point is on the y-axis
    g. If the returned code is 6, display that the point is on the x-axis
    h. If the returned code is 99, display an error
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
    if (x != 0 && y !=0)    //6a. Are x and y not on either axis?
    {
        if (x < 0 && y < 0) //x and y < 0, Quad 3
        {
            code = 3;  //Quadrant 3
        }
        else if (x < 0 && y > 0)    //x less than 0 and y greater than 0, Quad 2
        {
            code = 2;  //Quadrant 2
        }
        else if (x > 0 && y < 0)    //x greater than 0 and y less than 0, Quad 4
        {
            code = 4;  //Quadrant 4
        }
        else    //Else (x and y greater than 0), Quad 1
        {
            code = 1;  //Quadrant 1
        }
    }
    else if (x == 0 && y != 0)  //6b. Point is at x = 0, but y is not at 0
    {
        code = 5;  //Lies on Y-Axis
    }
    else if (y == 0 && x != 0)  //6c. Point is at y = 0, but x is not at 0
    {
        code = 6;  //Lies on X-Axis
    }
    else if (x == 0 && y == 0)  //6d. x and y are both 0
    {
        code = 0;  //Lies on origin
    }
    else
    {
        code = 99; //6e. Error
    }
    return code;    //Return the code for where the point lies
}

void display_result(int code, int x, int y)
{
    switch (code) {
    case 0: //7a. x and y are equal to 0
        printf("\n\nThe point (%d,%d) lies on the origin.", x, y);
        break;
    case 1: //7b. Point lies in quadrant 1
        printf("\n\nThe point (%d,%d) lies in Quadrant 1.", x, y);
        break;
    case 2: //7c. Point lies in quadrant 2
        printf("\n\nThe point (%d,%d) lies in Quadrant 2.", x, y);
        break;
    case 3: //7d. Point lies in quadrant 3
        printf("\n\nThe point (%d,%d) lies in Quadrant 3.", x, y);
        break;
    case 4: //7e. Point lies in quadrant 4
        printf("\n\nThe point (%d,%d) lies in Quadrant 4.", x, y);
        break;
    case 5: //7f. x equal to 0 but y is not equal to 0
        printf("\n\nThe point (%d,%d) lies on the y-axis.", x, y);
        break;
    case 6: //7g. y equal to 0 but x is not equal to 0
        printf("\n\nThe point (%d,%d) lies on the x-axis.", x, y);
        break;
    case 99:    //7h. Error case
        printf("\n\nError");
        break;
    }
    printf("\nThanks for using my program.\n"); //Thank user
    return ;
}
