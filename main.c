#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(void) {
    float a, b, c, r, S_triangle, S_semicircle;

    //input a
    printf("Enter the side \"a\" of the triangle:\n");
    scanf("%f", &a);

    //input b
    printf("Enter the side \"b\" of the triangle:\n");
    scanf("%f", &b);

    //calculating
    c = sqrt(a * a + b * b);
    r = c / 2;
    S_triangle = (a * b) / 2;
    S_semicircle = (PI * r * r) / 2;

    //conditionals
    if (S_triangle > S_semicircle) {
        printf("The area of triangle is bigger\n");
    }
    else if (S_semicircle > S_triangle) {
        printf("The area of semicircle is bigger\n");
    }
    else {
        printf("The areas are the same");
    }

    //output
    printf("The area of the triangle is %f\n", S_triangle);
    printf("The area of semicircle is %f\n", S_semicircle);
    return 0;
}