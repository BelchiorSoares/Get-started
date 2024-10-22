#include <stdio.h>

int main(void)
{
    char greetings[] = "Hello World!";

    printf("%c\n", greetings[0]);

    greetings[0] = 'J';
    printf("%s", greetings);

    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);

    for (int i = 0; i < length; ++i)
    {
        printf("%c\n", carName[i]);
    }

    char message[] = "Good to \'see you,";
    char fname[] = "John";

    printf("%s %s!", message, fname);
    return 0;
}
