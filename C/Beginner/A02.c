#include <stdio.h>

int main(void)
{
    int myNum = 15;

    int myOtherNum = 23;

    // Assign the value of myOtherNum (23) to myNum
    myNum = myOtherNum;

    // myNum is now 23, instead of 15
    printf("%d", myNum);

    int x = 5;
    int y = 6;
    int sum = x + y;

    printf("\n%d", sum);
    return 0;
}
