#include <stdio.h>

int main(void)
{
    int x = 20;
    int y = 18;

    if (x < y)
        printf("Good morning.\n");
    else if (y == x)
        printf("Good day.\n");
    else
        printf("Good evening.\n");

    int time = 20;
    (time > 18) ? printf("Good day.") : printf("Good evening.");
    return 0;
}
