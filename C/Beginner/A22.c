#include <string.h>
#include <stdio.h>

int main(void)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[20] = "Hello ";
    char str2[] = "World!";
    char str3[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);
    // Copy str1 to str2
    strcpy(str2, str1);

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str2, str3)); // Returns -4 (the strings are not equal)

    printf("%lu\n", strlen(alphabet));
    printf("%lu\n", sizeof(alphabet));
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}
