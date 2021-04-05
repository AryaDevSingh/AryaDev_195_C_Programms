/*
 * C Program to Find the Perimeter of a Circle, Rectangle and Triangle
 */
#include <stdio.h>
#include <math.h>
 
int main()
{
    float radius, length, width, a, b, c, height,base,perimeter,area,pi;
    int n;
    
    pi=3.14;
 
    
    
    printf("\n Enter width and length of the rectangle : ");
    scanf("%f%f", &width,& length);
    perimeter = 2 * (width + length);
    area = length*width;
    printf("Perimeter of rectangle is: %.3f", perimeter);
    printf("Area of rectangle is: %.3f",area);
 
    
    
    printf("\n Enter the size of all sides of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a + b + c;
    area = 1/2*base*height;
    printf("Perimeter of triangle is: %.3f", perimeter);
    printf("Area of triangle is: %.3f",area);
    
 
    

    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    perimeter = 2 * (22 / 7) * radius;
    area = pi*radius*radius;
    printf("Perimeter of circle is: %.3f", perimeter);
    printf("Area of circle is : %.3f",area);
    return 0;}
 
    
