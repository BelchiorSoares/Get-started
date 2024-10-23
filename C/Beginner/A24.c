#include <stdio.h>

int main(void)
{
    int myAge = 43;
    int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    printf("%d\n", myAge);  // Outputs the value of myAge (43)
    printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", ptr);
    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);
    return 0;
}
