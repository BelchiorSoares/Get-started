#include <stdio.h>

int main(void)
{
    int myNumbers[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("%lu\n", sizeof(myNumbers));
    printf("%d\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", myNumbers[i]);
    }
    return 0;
}
