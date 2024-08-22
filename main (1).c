/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float areaofcircle(float rad);
float areaofrectangle(float a, float b);
float areaofsquare(float side);

void main()
{
    float rad=2;
    float side=3;
    float a=5;
    float b=5;
    printf("the area of circle is %f",areaofcircle( rad));
    printf("the area of rectangle is %f",areaofrectangle( a, b));
    printf("the area of square is %f ",areaofsquare( side));
    
}
float areaofcircle(float rad)
{
    return 3.14*rad*rad;
}

float areaofrectangle(float a,float b)
{
    return a*b;
}
float areaofsquare(float side)
{
    return side*side;
}
