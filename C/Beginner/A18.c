#include <stdio.h>

int main(void)
{
    int myNumbers[4]= {10, 20, 30, 40};

    myNumbers[1]=50;
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",myNumbers[i]);
    }
    return 0;
}
