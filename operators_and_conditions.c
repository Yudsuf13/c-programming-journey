/*Here is your scenario. You are writing the firmware for a server room's environmental control system.

You have two variables: a float for temperature, and an int for humidity.

The Logic Requirements:

If the temperature is strictly greater than 30.5 AND the humidity is greater than or equal to 75, the system must print: CRITICAL: AC Overload.

If the system does not meet both of those exact conditions simultaneously, it must print: System Stable.

Write the complete C program from top to bottom. Declare your variables, assign them any test values you want directly in the code, and construct the if-else statement to handle the logic.*/

#include <stdio.h>

int main()
{
    // temperature and humidity variables declaration
    float temperature=36; 
    int humidity=20;

    // conditional logic 

    if(temperature>30.5 && humidity>=75)
    {
        printf("CRITICAL: AC Overload");
    }
    else
    {
        printf("System Stable");
    }
    return 0;
}