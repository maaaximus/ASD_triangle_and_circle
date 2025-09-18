#include <stdio.h>
#include <math.h>
#include <conio.h>

#define PI 3.141592

int main(void) {
    float a, b, c, r, S_triangle, S_circle;

    //input a
    printf("Enter the side \"a\" of the triangle: ");
    scanf("%f", &a);

    //input b
    printf("Enter the side \"b\" of the triangle: ");
    scanf("%f", &b);

    //calculating
    c = sqrt(a*a + b*b);
    r = c/2;
    S_triangle = (a + b)/2;
    S_circle = (PI*r*r)/2;

    //output
    printf("The area of the triangle is %.2f\n", S_triangle);
    printf("The area of the circle is %.2f\n", S_circle);
    getch();
    return 0;
}