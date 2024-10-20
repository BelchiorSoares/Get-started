#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    int countdown = 3;

    while (countdown > 0)
    {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy New Year!!\n");
    return 0;
}
