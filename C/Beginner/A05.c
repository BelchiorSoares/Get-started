#include <stdio.h>

int main(void)
{
    // Student data
    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d", area);

    char myText[] = "Hello";
    printf("\n%s", myText);

    int myNum1 = 1000;
    printf("%d\n", myNum1);

    float myNum2 = 5.75;
    printf("%f\n", myNum2);

    double myNum3 = 19.99;
    printf("%.2lf\n", myNum3);

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%.2f\n", f1);
    printf("%.3lf", d1);
    return 0;
}
